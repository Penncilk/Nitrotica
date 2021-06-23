package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;
import flixel.FlxG;

class TitleState extends FlxState
{
	var text = new FlxText(1200, 10, 1000, "Nitrotica", 100);
	var bg = new FlxSprite();

	override public function create()
	{
		FlxG.sound.playMusic("assets/music/menu.ogg", 1, true);
		add(bg);
		add(text);
		bg.loadGraphic("assets/images/blackScreen.png");
		FlxTween.tween(text, {x: 10, y: 10}, 0.5);
		bg.loadGraphic("assets/images/titleBG.png");

		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
	}
}
