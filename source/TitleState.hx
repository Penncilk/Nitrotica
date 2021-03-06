package;

import flixel.FlxState;
import flixel.FlxSprite;
import flixel.tweens.FlxTween;
import flixel.text.FlxText;
import flixel.FlxG;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

class TitleState extends FlxState
{

	var text = new FlxText(1200, 10, 1000, "Nitrotica", 100);
	var bg = new FlxSprite();
	var gameStarted = false;

	function enter(timer:FlxTimer):Void
	{
		FlxG.switchState(new MenuState());
	}

	function burn(timer:FlxTimer):Void
	{
		FlxG.camera.flash(FlxColor.RED, 0.5);
		openingscene.animation.play("burnFire");
	}

	var openingscene = new FlxSprite();

	override public function create()
	{
		trace("It be the title");
		bg.antialiasing = true;
		openingscene.loadGraphic("assets/images/backgrounds/burn.png", true, 1280, 720);
		FlxG.sound.playMusic("assets/music/menu.ogg", 1, true);
		openingscene.animation.add("fire", [
			0, 1], 12, true);
		openingscene.animation.add("burnFire", [
			0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24
		], 24, false);
		add(openingscene);
		add(text);
		openingscene.animation.play("fire");
		FlxG.camera.flash(FlxColor.BLACK, 1);
		FlxTween.tween(text, {x: 10, y: 10}, 0.5);
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);

		if (FlxG.keys.justPressed.ENTER && gameStarted == false)
		{
			FlxG.camera.flash(FlxColor.RED, 1);
			FlxTween.tween(text, {x: -1000, y: 10}, 0.5);
			FlxG.sound.playMusic("null");
			FlxG.sound.play("assets/sounds/fire.ogg");
			new FlxTimer().start(2.5, burn);
			new FlxTimer().start(4, enter);
			gameStarted = true;
		}
		if (FlxG.keys.justPressed.R) {
            FlxG.switchState(new PlatformState());
        }
	}
}
