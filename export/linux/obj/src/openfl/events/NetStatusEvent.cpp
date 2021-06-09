// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_NetStatusEvent
#include <openfl/events/NetStatusEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_27135fd1b85393b6_150_new,"openfl.events.NetStatusEvent","new",0x7499fa94,"openfl.events.NetStatusEvent.new","openfl/events/NetStatusEvent.hx",150,0xf85a9d3c)
HX_LOCAL_STACK_FRAME(_hx_pos_27135fd1b85393b6_157_clone,"openfl.events.NetStatusEvent","clone",0xfa2f3291,"openfl.events.NetStatusEvent.clone","openfl/events/NetStatusEvent.hx",157,0xf85a9d3c)
HX_LOCAL_STACK_FRAME(_hx_pos_27135fd1b85393b6_167_toString,"openfl.events.NetStatusEvent","toString",0x4e1f29f8,"openfl.events.NetStatusEvent.toString","openfl/events/NetStatusEvent.hx",167,0xf85a9d3c)
static const ::String _hx_array_data_a54460a2_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("info",6e,38,bb,45),
};
HX_LOCAL_STACK_FRAME(_hx_pos_27135fd1b85393b6_171___init,"openfl.events.NetStatusEvent","__init",0xd582cc7c,"openfl.events.NetStatusEvent.__init","openfl/events/NetStatusEvent.hx",171,0xf85a9d3c)
HX_LOCAL_STACK_FRAME(_hx_pos_27135fd1b85393b6_31_boot,"openfl.events.NetStatusEvent","boot",0x8a3a477e,"openfl.events.NetStatusEvent.boot","openfl/events/NetStatusEvent.hx",31,0xf85a9d3c)
namespace openfl{
namespace events{

void NetStatusEvent_obj::__construct(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic info){
            		bool bubbles = __o_bubbles.Default(false);
            		bool cancelable = __o_cancelable.Default(false);
            	HX_STACKFRAME(&_hx_pos_27135fd1b85393b6_150_new)
HXLINE( 151)		this->info = info;
HXLINE( 153)		super::__construct(type,bubbles,cancelable);
            	}

Dynamic NetStatusEvent_obj::__CreateEmpty() { return new NetStatusEvent_obj; }

void *NetStatusEvent_obj::_hx_vtable = 0;

Dynamic NetStatusEvent_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< NetStatusEvent_obj > _hx_result = new NetStatusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool NetStatusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08ec4c31) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08ec4c31;
	} else {
		return inClassId==(int)0x4c3577fc;
	}
}

 ::openfl::events::Event NetStatusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_27135fd1b85393b6_157_clone)
HXLINE( 158)		 ::openfl::events::NetStatusEvent event =  ::openfl::events::NetStatusEvent_obj::__alloc( HX_CTX ,this->type,this->bubbles,this->cancelable,this->info);
HXLINE( 159)		event->target = this->target;
HXLINE( 160)		event->currentTarget = this->currentTarget;
HXLINE( 161)		event->eventPhase = this->eventPhase;
HXLINE( 162)		return event;
            	}


::String NetStatusEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_27135fd1b85393b6_167_toString)
HXDLIN( 167)		return this->_hx___formatToString(HX_("NetStatusEvent",4b,2a,fa,67),::Array_obj< ::String >::fromData( _hx_array_data_a54460a2_3,4));
            	}


void NetStatusEvent_obj::_hx___init(){
            	HX_STACKFRAME(&_hx_pos_27135fd1b85393b6_171___init)
HXLINE( 172)		this->super::_hx___init();
HXLINE( 173)		this->info = null();
            	}


::String NetStatusEvent_obj::NET_STATUS;


::hx::ObjectPtr< NetStatusEvent_obj > NetStatusEvent_obj::__new(::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic info) {
	::hx::ObjectPtr< NetStatusEvent_obj > __this = new NetStatusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,info);
	return __this;
}

::hx::ObjectPtr< NetStatusEvent_obj > NetStatusEvent_obj::__alloc(::hx::Ctx *_hx_ctx,::String type,::hx::Null< bool >  __o_bubbles,::hx::Null< bool >  __o_cancelable, ::Dynamic info) {
	NetStatusEvent_obj *__this = (NetStatusEvent_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(NetStatusEvent_obj), true, "openfl.events.NetStatusEvent"));
	*(void **)__this = NetStatusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,info);
	return __this;
}

NetStatusEvent_obj::NetStatusEvent_obj()
{
}

void NetStatusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(NetStatusEvent);
	HX_MARK_MEMBER_NAME(info,"info");
	 ::openfl::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void NetStatusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(info,"info");
	 ::openfl::events::Event_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val NetStatusEvent_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { return ::hx::Val( info ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"__init") ) { return ::hx::Val( _hx___init_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val NetStatusEvent_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"info") ) { info=inValue.Cast<  ::Dynamic >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void NetStatusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("info",6e,38,bb,45));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo NetStatusEvent_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::Dynamic */ ,(int)offsetof(NetStatusEvent_obj,info),HX_("info",6e,38,bb,45)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo NetStatusEvent_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &NetStatusEvent_obj::NET_STATUS,HX_("NET_STATUS",34,ea,44,5d)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String NetStatusEvent_obj_sMemberFields[] = {
	HX_("info",6e,38,bb,45),
	HX_("clone",5d,13,63,48),
	HX_("toString",ac,d0,6e,38),
	HX_("__init",30,9e,b3,f4),
	::String(null()) };

static void NetStatusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(NetStatusEvent_obj::NET_STATUS,"NET_STATUS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void NetStatusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(NetStatusEvent_obj::NET_STATUS,"NET_STATUS");
};

#endif

::hx::Class NetStatusEvent_obj::__mClass;

static ::String NetStatusEvent_obj_sStaticFields[] = {
	HX_("NET_STATUS",34,ea,44,5d),
	::String(null())
};

void NetStatusEvent_obj::__register()
{
	NetStatusEvent_obj _hx_dummy;
	NetStatusEvent_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.events.NetStatusEvent",a2,60,44,a5);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = NetStatusEvent_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(NetStatusEvent_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(NetStatusEvent_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< NetStatusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = NetStatusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = NetStatusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = NetStatusEvent_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void NetStatusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_27135fd1b85393b6_31_boot)
HXDLIN(  31)		NET_STATUS = HX_("netStatus",6f,4f,ec,46);
            	}
}

} // end namespace openfl
} // end namespace events
