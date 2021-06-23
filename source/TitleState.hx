package;

import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import haxe.Timer;
import flixel.util.FlxTimer;
import flixel.input.touch.FlxTouch;

class TitleState extends FlxState
{

	var text = new FlxText(1200, 10, 1000, "Nitrotica", 100);
	var bg = new FlxSprite();

	function enter(timer:FlxTimer):Void
	{
		FlxG.switchState(new ComingSoonState());
	}

	function burn(timer:FlxTimer):Void
	{
		FlxG.camera.flash(FlxColor.RED, 0.5);
		openingscene.animation.play("burnFire");
	}

	var openingscene = new FlxSprite();

	override public function create()
	{
		bg.antialiasing = true;
		openingscene.loadGraphic("assets/images/burn.png", true, 1280, 720);
		FlxG.sound.playMusic("assets/music/menu.ogg", 1, true);
		openingscene.animation.add("fire", [
			0, 1], 12, true);
		openingscene.animation.add("burnFire", [
			0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24
		], 24, false);
		add(openingscene);
		add(text);
		
		FlxG.sound.playMusic("assets/music/menu.ogg", 1, true);
		bg.loadGraphic("assets/images/titleBG.png");
		openingscene.animation.play("fire");
		FlxG.camera.flash(FlxColor.BLACK, 1);
		FlxTween.tween(text, {x: 10, y: 10}, 0.5);
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.ENTER)
		{
			FlxG.camera.flash(FlxColor.RED, 1);
			FlxTween.tween(text, {x: -1000, y: 10}, 0.5);
			FlxG.sound.playMusic("null");
			FlxG.sound.play("assets/music/fire.ogg");
			new FlxTimer().start(2.5, burn);
			new FlxTimer().start(4, enter);
		}
	}
}
