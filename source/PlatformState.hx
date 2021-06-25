package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;

class PlatformState extends FlxState
{
	//120*160
	var ground = new FlxSprite();
	var player = new FlxSprite();
	var jumpTimer:Float = 0;
	var jumping:Bool = false;
	var goingLeft = false;

	function stop(timer:FlxTimer):Void
	{
		player.velocity.x = 0;
		player.acceleration.x = 0;
	}
	override public function create():Void
	{
		ground.makeGraphic(1500, 20, FlxColor.WHITE, true);
		ground.y = 700;
		add(ground);
		player.loadGraphic("assets/images/sprites/placeholder.png", true, 120, 160);
        player.animation.add("RIGHT", [2, 3, 4, 5, 4, 3], true);
        player.animation.add("LEFT", [0], true);
		player.animation.add("STOP", [0], false);
		player.animation.add("START", [6], false);
		player.animation.add("JUMP", [7, 8], false);

		player.y = 500;
		ground.immovable = true;
		add(player);
		super.create();
		player.acceleration.y = 500;
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		FlxG.collide(ground, player);
		FlxG.camera.follow(player, PLATFORMER, 0.25);
		if (FlxG.keys.pressed.RIGHT && !FlxG.keys.pressed.LEFT)
		{
			player.acceleration.x = 500;
		}
		if (FlxG.keys.justPressed.RIGHT && !FlxG.keys.justPressed.LEFT)
			{
				player.animation.play("START");
				player.animation.play("RIGHT");
			}


		if (FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT)
		{
			player.acceleration.x = -500;
		}
		if (!FlxG.keys.justPressed.RIGHT && FlxG.keys.justPressed.LEFT)
			{
				player.animation.play("START");
				player.animation.play("LEFT");
			}

		if (!FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT && !jumping || FlxG.keys.pressed.LEFT && FlxG.keys.pressed.RIGHT && !jumping || FlxG.keys.justPressed.RIGHT || FlxG.keys.justPressed.LEFT )
		{
			new FlxTimer().start(0.07, stop);
		}

		// Lets the player jump after landing
		if (jumping && !FlxG.keys.justPressed.UP)
		{
			jumping = false;
		}

		// Resets when touching the floor
		if (player.isTouching(FlxObject.DOWN) && !jumping)
		{
			jumpTimer = 0;
			player.acceleration.y = 500;
		}

		// Detects if the player is touching the ground when trying to jump
		if (jumpTimer >= 0 && FlxG.keys.pressed.UP)
		{
			jumping = true;
			jumpTimer += elapsed;
            trace("jumpTimer:"+jumpTimer);
		}

		if (jumpTimer >= 0 && !jumping)
		{
			jumpTimer = -1;
		}

		// Hold button to jump higher (up to 0.1s)
		if (jumpTimer > 0 && jumpTimer < 0.1)
		{
			player.velocity.y = -500;
		}

		if (jumping == true)
		{
			player.acceleration.y += (jumpTimer * 100);
		}
        if (FlxG.keys.justPressed.R) {
            FlxG.switchState(new PlatformState());
        }
	}
}
