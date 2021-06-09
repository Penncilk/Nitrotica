package;

import flixel.FlxState;
import flixel.text.FlxText;
//Will later be re-written to TitleState
class PlayState extends FlxState
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
