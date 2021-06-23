// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_ComingSoonState
#include <ComingSoonState.h>
#endif
#ifndef INCLUDED_TitleState
#include <TitleState.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxBaseKeyList
#include <flixel/input/FlxBaseKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_FlxKeyManager
#include <flixel/input/FlxKeyManager.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyList
#include <flixel/input/keyboard/FlxKeyList.h>
#endif
#ifndef INCLUDED_flixel_input_keyboard_FlxKeyboard
#include <flixel/input/keyboard/FlxKeyboard.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_tweens_FlxTween
#include <flixel/tweens/FlxTween.h>
#endif
#ifndef INCLUDED_flixel_tweens_misc_VarTween
#include <flixel/tweens/misc/VarTween.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimerManager
#include <flixel/util/FlxTimerManager.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ad14ed6c4c6d6534_11_new,"ComingSoonState","new",0x70636727,"ComingSoonState.new","ComingSoonState.hx",11,0xa81bfa29)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14ed6c4c6d6534_14_noteadd1,"ComingSoonState","noteadd1",0x77795bbb,"ComingSoonState.noteadd1","ComingSoonState.hx",14,0xa81bfa29)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14ed6c4c6d6534_18_noteadd2,"ComingSoonState","noteadd2",0x77795bbc,"ComingSoonState.noteadd2","ComingSoonState.hx",18,0xa81bfa29)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14ed6c4c6d6534_25_create,"ComingSoonState","create",0xe8eb0695,"ComingSoonState.create","ComingSoonState.hx",25,0xa81bfa29)
HX_LOCAL_STACK_FRAME(_hx_pos_ad14ed6c4c6d6534_35_update,"ComingSoonState","update",0xf3e125a2,"ComingSoonState.update","ComingSoonState.hx",35,0xa81bfa29)

void ComingSoonState_obj::__construct( ::Dynamic MaxSize){
            	HX_GC_STACKFRAME(&_hx_pos_ad14ed6c4c6d6534_11_new)
HXLINE(  23)		this->note2 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-1000,70,5000,HX_("More Coming Soon",0f,9d,9e,02),50,null());
HXLINE(  22)		this->note1 =  ::flixel::text::FlxText_obj::__alloc( HX_CTX ,-1000,10,5000,HX_("Well, that's all I have,",43,36,6c,b7),50,null());
HXLINE(  11)		super::__construct(MaxSize);
            	}

Dynamic ComingSoonState_obj::__CreateEmpty() { return new ComingSoonState_obj; }

void *ComingSoonState_obj::_hx_vtable = 0;

Dynamic ComingSoonState_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ComingSoonState_obj > _hx_result = new ComingSoonState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ComingSoonState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x15a17c11) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x15a17c11;
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void ComingSoonState_obj::noteadd1( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_ad14ed6c4c6d6534_14_noteadd1)
HXLINE(  15)		this->add(this->note1);
HXLINE(  16)		::flixel::tweens::FlxTween_obj::tween(this->note1, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),20)
            			->setFixed(1,HX_("y",79,00,00,00),10)),((Float)0.5),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComingSoonState_obj,noteadd1,(void))

void ComingSoonState_obj::noteadd2( ::flixel::util::FlxTimer timer){
            	HX_STACKFRAME(&_hx_pos_ad14ed6c4c6d6534_18_noteadd2)
HXLINE(  19)		this->add(this->note2);
HXLINE(  20)		::flixel::tweens::FlxTween_obj::tween(this->note2, ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("x",78,00,00,00),20)
            			->setFixed(1,HX_("y",79,00,00,00),70)),1,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(ComingSoonState_obj,noteadd2,(void))

void ComingSoonState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_ad14ed6c4c6d6534_25_create)
HXLINE(  27)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(1,this->noteadd1_dyn(),null());
HXLINE(  28)		 ::flixel::util::FlxTimer_obj::__alloc( HX_CTX ,null())->start(2,this->noteadd2_dyn(),null());
            	}


void ComingSoonState_obj::update(Float elapsed){
            	HX_GC_STACKFRAME(&_hx_pos_ad14ed6c4c6d6534_35_update)
HXLINE(  37)		this->super::update(elapsed);
HXLINE(  38)		 ::flixel::input::keyboard::FlxKeyList _this = ( ( ::flixel::input::keyboard::FlxKeyList)(::flixel::FlxG_obj::keys->pressed) );
HXDLIN(  38)		if (_this->keyManager->checkStatus(9,_this->status)) {
HXLINE(  39)			 ::flixel::FlxState nextState =  ::TitleState_obj::__alloc( HX_CTX ,null());
HXDLIN(  39)			if (::flixel::FlxG_obj::game->_state->switchTo(nextState)) {
HXLINE(  39)				::flixel::FlxG_obj::game->_requestedState = nextState;
            			}
            		}
            	}



::hx::ObjectPtr< ComingSoonState_obj > ComingSoonState_obj::__new( ::Dynamic MaxSize) {
	::hx::ObjectPtr< ComingSoonState_obj > __this = new ComingSoonState_obj();
	__this->__construct(MaxSize);
	return __this;
}

::hx::ObjectPtr< ComingSoonState_obj > ComingSoonState_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize) {
	ComingSoonState_obj *__this = (ComingSoonState_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(ComingSoonState_obj), true, "ComingSoonState"));
	*(void **)__this = ComingSoonState_obj::_hx_vtable;
	__this->__construct(MaxSize);
	return __this;
}

ComingSoonState_obj::ComingSoonState_obj()
{
}

void ComingSoonState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ComingSoonState);
	HX_MARK_MEMBER_NAME(note1,"note1");
	HX_MARK_MEMBER_NAME(note2,"note2");
	 ::flixel::FlxState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ComingSoonState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(note1,"note1");
	HX_VISIT_MEMBER_NAME(note2,"note2");
	 ::flixel::FlxState_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val ComingSoonState_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"note1") ) { return ::hx::Val( note1 ); }
		if (HX_FIELD_EQ(inName,"note2") ) { return ::hx::Val( note2 ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"create") ) { return ::hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"noteadd1") ) { return ::hx::Val( noteadd1_dyn() ); }
		if (HX_FIELD_EQ(inName,"noteadd2") ) { return ::hx::Val( noteadd2_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ComingSoonState_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"note1") ) { note1=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
		if (HX_FIELD_EQ(inName,"note2") ) { note2=inValue.Cast<  ::flixel::text::FlxText >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ComingSoonState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("note1",ff,db,ca,9f));
	outFields->push(HX_("note2",00,dc,ca,9f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ComingSoonState_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ComingSoonState_obj,note1),HX_("note1",ff,db,ca,9f)},
	{::hx::fsObject /*  ::flixel::text::FlxText */ ,(int)offsetof(ComingSoonState_obj,note2),HX_("note2",00,dc,ca,9f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ComingSoonState_obj_sStaticStorageInfo = 0;
#endif

static ::String ComingSoonState_obj_sMemberFields[] = {
	HX_("noteadd1",e2,e3,c3,64),
	HX_("noteadd2",e3,e3,c3,64),
	HX_("note1",ff,db,ca,9f),
	HX_("note2",00,dc,ca,9f),
	HX_("create",fc,66,0f,7c),
	HX_("update",09,86,05,87),
	::String(null()) };

::hx::Class ComingSoonState_obj::__mClass;

void ComingSoonState_obj::__register()
{
	ComingSoonState_obj _hx_dummy;
	ComingSoonState_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ComingSoonState",b5,47,71,1a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ComingSoonState_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ComingSoonState_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ComingSoonState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ComingSoonState_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
