package;

import flixel.FlxState;
import flixel.text.FlxText;

class TitleState extends FlxState
{
	var text = new FlxText(10, 10, 100, "Hello, World!");

	override public function create()
	{
		add(text);
		super.create();
	}

	override public function update(elapsed:Float)
	{
		super.update(elapsed);
		text.y++;
	}
}
