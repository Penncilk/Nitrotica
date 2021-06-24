package;

import flixel.FlxSprite;
import flixel.FlxState;
import flixel.FlxObject;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;
import flixel.util.FlxTimer;

class PlatformState extends FlxState
{
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
        ground.makeGraphic(1280, 20, FlxColor.WHITE, true);
        ground.y = 700;
        add(ground);
        player.makeGraphic(50, 50, FlxColor.YELLOW, true);
        player.y = 500;
        ground.immovable = true;
        add(player);
        super.create();
        player.acceleration.y = 250;
    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
         FlxG.collide(ground, player);
         if (FlxG.keys.pressed.RIGHT && !FlxG.keys.pressed.LEFT)
            {
                    player.acceleration.x = 500;
            }
            if (FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT)
            {
                    player.acceleration.x = -500;
            }
            if (!FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT || FlxG.keys.pressed.LEFT && FlxG.keys.pressed.RIGHT) {
            new FlxTimer().start(0.07, stop);
            }
         }
        }