package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;
import flixel.tweens.FlxTween;

class MenuState extends FlxState
{
	var bg = new FlxSprite();
	var ready = new FlxSprite();
	var options = new FlxSprite();
	var choice = ["ready", "options"];
	var overcurrent:Int = 0;

	function accessarea(timer:FlxTimer):Void
	{
		switch (overcurrent)
		{
			case 0:
                FlxG.switchState(new PlatformState());
			case 1:

                FlxG.switchState(new ComingSoonState());
		}
	}

	override public function create():Void
	{
		FlxTween.tween(ready, {x: 70, y: 300}, 0.5);
		FlxTween.tween(options, {x: 700, y: 300}, 0.5);
		trace("Trollge was here!");
		FlxG.camera.flash(FlxColor.BLACK, 1);
		bg.loadGraphic("assets/images/backgrounds/alive.png");
		ready.loadGraphic("assets/images/sprites/ready.png");
		options.loadGraphic("assets/images/sprites/options.png");
		add(bg);
		add(ready);
		ready.x = 70;
		ready.y = 750;
		add(options);
		options.x = 1330;
		options.y = 300;
		super.create();
	}

	override public function update(elapsed:Float):Void
	{
		super.update(elapsed);
		if (FlxG.keys.pressed.ESCAPE)
		{
			FlxG.switchState(new TitleState());
		}

		if (FlxG.keys.justPressed.ENTER)
		{
			trace("OH CRAP HE DEAD!!!");
			FlxG.camera.flash(FlxColor.RED, 1);
			bg.loadGraphic("assets/images/backgrounds/dead.png");
			new FlxTimer().start(1, accessarea);
		}
		
		if (FlxG.keys.justPressed.RIGHT)
		{
			FlxG.sound.play("assets/sounds/tink.ogg");
			overcurrent++;
			if (overcurrent > 1)
			{

				overcurrent = 0;
			}
		}

		if (FlxG.keys.justPressed.LEFT)
		{
			overcurrent--;
			FlxG.sound.play("assets/music/tink.ogg");
			if (overcurrent < 0)
				{
	
					overcurrent = 1;
				}
		}
		
		switch (overcurrent)
		{
			case 0:
				ready.loadGraphic("assets/images/sprites/overready.png");
				options.loadGraphic("assets/images/sprites/options.png");
			case 1:
				ready.loadGraphic("assets/images/sprites/ready.png");
				options.loadGraphic("assets/images/sprites/overoptions.png");
		}
	}
}
