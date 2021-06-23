package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import haxe.Timer;

class TitleState extends FlxState
{
	var text = new FlxText(1200, 10, 1000, "Nitrotica", 100);
	var bg = new FlxSprite();

	override public function create()
	{
		FlxG.sound.playMusic("assets/music/menu.ogg", 1, true);
		add(bg);
		add(text);
		FlxG.sound.playMusic("assets/music/menu.ogg", 1, true);
		bg.loadGraphic("assets/images/titleBG.png");
		FlxG.camera.flash(FlxColor.BLACK, 2);
		FlxTween.tween(text, {x: 10, y: 10}, 0.5);
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.keys.pressed.ENTER)
		{
			FlxG.camera.flash(FlxColor.WHITE, 1);
			FlxG.switchState(new MenuState());
		}
			}
		}
