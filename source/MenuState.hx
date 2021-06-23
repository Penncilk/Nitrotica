package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;

import flixel.FlxState;

class MenuState extends FlxState
{

    var note1 = new FlxText(-100, 10, 5000, "Well, that's all I have,", 50);
    var note2 = new FlxText(-100, 70, 5000, "More Coming Soon", 50);
    override public function create():Void
    {
        //create your state objects here
        add(note1);
        FlxTween.tween(note1, {x: 20, y: 10}, 0.5);
        add(note2);
        FlxTween.tween(note2, {x: 20, y: 70}, 1);

    }

    override public function update(elapsed:Float):Void
    {
        //call super to update the core state class
        super.update(elapsed);
        if (FlxG.keys.pressed.TAB) {
			FlxG.switchState(new TitleState());
		}
    }
}
