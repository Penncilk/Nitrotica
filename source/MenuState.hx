package;

import flixel.FlxState;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.util.FlxColor;

class MenuState extends FlxState
{
    var bg = new FlxSprite();
    override public function create():Void
    {
        trace("Trollge was here!");
        FlxG.camera.flash(FlxColor.BLACK, 1);
        bg.loadGraphic("assets/images/dead.png");
        add(bg);
        super.create();

    }

    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }
}
