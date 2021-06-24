package;

import flixel.util.FlxTimer;
import flixel.FlxState;
import flixel.FlxG;
import flixel.text.FlxText;
import flixel.tweens.FlxTween;

import flixel.FlxState;

class ComingSoonState extends FlxState
{
    
    function noteadd1(timer:FlxTimer):Void {
		add(note1);
        FlxTween.tween(note1, {x: 20, y: 10}, 0.5);
	}
    function noteadd2(timer:FlxTimer):Void {
        add(note2);
        FlxTween.tween(note2, {x: 20, y: 70}, 1);
	}
    var note1 = new FlxText(-1000, 10, 5000, "I haven't built this part yet", 50);
    var note2 = new FlxText(-1000, 70, 5000, "More Coming Soon", 50);
    override public function create():Void
    {
        trace("cooming soun");
        //create your state objects here
        new FlxTimer().start(1, noteadd1);
        new FlxTimer().start(2, noteadd2);

 

    }

    override public function update(elapsed:Float):Void
    {
        //call super to update the core state class
        super.update(elapsed);
        if (FlxG.keys.pressed.ESCAPE || FlxG.keys.pressed.ENTER) {
			FlxG.switchState(new TitleState());
		}
    }
}
