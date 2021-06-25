package;

import flixel.FlxG;
import flixel.FlxObject;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.util.FlxColor;
import flixel.util.FlxSpriteUtil;

class Player extends FlxSprite
{
	public var player = new FlxSprite();

	function movehorizontal()
	{
		if (FlxG.keys.pressed.RIGHT && !FlxG.keys.pressed.LEFT)		
		{
			player.acceleration.x = 500;
		}

		if (FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT)
		{
			player.acceleration.x = -500;
		}
			
        	if (!FlxG.keys.pressed.LEFT && !FlxG.keys.pressed.RIGHT || FlxG.keys.pressed.LEFT && FlxG.keys.pressed.RIGHT)
		{
			player.velocity.x = 0;
			player.acceleration.x = 0;
		}
		
	}
}
