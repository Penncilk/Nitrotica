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
	var ground = new FlxSprite();
	var player = new FlxSprite();
	var viewabove = new FlxSprite();
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
		ground.makeGraphic(1280, 20, FlxColor.WHITE, true);
		ground.y = 700;
		add(ground);
		player.makeGraphic(50, 50, FlxColor.YELLOW, true);
		player.y = 500;
		ground.immovable = true;
		add(player);
		super.create();
		player.acceleration.y = 500;
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		viewabove.y = player.y;
		viewabove.x = player.x;
		FlxG.collide(ground, player);
		FlxG.camera.follow(viewabove);
		if (FlxG.keys.pressed.RIGHT && !FlxG.keys.pressed.LEFT)
		{
			player.acceleration.x = 500;
		}

		if (FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT)
		{
			player.acceleration.x = -500;
		}

		if (!FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT && player.isTouching(FlxObject.DOWN) || FlxG.keys.pressed.LEFT && FlxG.keys.pressed.RIGHT
			&& player.isTouching(FlxObject.DOWN))
		{
			new FlxTimer().start(0.07, stop);
		}

		// Lets the player jump after landing
		if (jumping && !FlxG.keys.pressed.UP)
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
		}
		else
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
	}
}
