package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

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
		trace("Trollge was here!");
		FlxG.camera.flash(FlxColor.BLACK, 1);
		bg.loadGraphic("assets/images/alive.png");
		ready.loadGraphic("assets/images/ready.png");
		options.loadGraphic("assets/images/options.png");
		add(bg);
		add(ready);
		ready.x = 70;
		ready.y = 300;
		add(options);
		options.x = 700;
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
			bg.loadGraphic("assets/images/dead.png");
			new FlxTimer().start(1, accessarea);
		}
		
		if (FlxG.keys.justPressed.RIGHT)
		{
			FlxG.sound.play("assets/music/tink.ogg");
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
				ready.loadGraphic("assets/images/overready.png");
				options.loadGraphic("assets/images/options.png");
			case 1:
				ready.loadGraphic("assets/images/ready.png");
				options.loadGraphic("assets/images/overoptions.png");
		}
	}
}
