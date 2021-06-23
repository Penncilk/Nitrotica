// Generated by Haxe 4.1.5
#ifndef INCLUDED_ComingSoonState
#define INCLUDED_ComingSoonState

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
HX_DECLARE_CLASS0(ComingSoonState)
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,text,FlxText)
HX_DECLARE_CLASS2(flixel,util,FlxTimer)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)



class HXCPP_CLASS_ATTRIBUTES ComingSoonState_obj : public  ::flixel::FlxState_obj
{
	public:
		typedef  ::flixel::FlxState_obj super;
		typedef ComingSoonState_obj OBJ_;
		ComingSoonState_obj();

	public:
		enum { _hx_ClassId = 0x15a17c11 };

		void __construct( ::Dynamic MaxSize);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="ComingSoonState")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"ComingSoonState"); }
		static ::hx::ObjectPtr< ComingSoonState_obj > __new( ::Dynamic MaxSize);
		static ::hx::ObjectPtr< ComingSoonState_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic MaxSize);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~ComingSoonState_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("ComingSoonState",b5,47,71,1a); }

		void noteadd1( ::flixel::util::FlxTimer timer);
		::Dynamic noteadd1_dyn();

		void noteadd2( ::flixel::util::FlxTimer timer);
		::Dynamic noteadd2_dyn();

		 ::flixel::text::FlxText note1;
		 ::flixel::text::FlxText note2;
		void create();

		void update(Float elapsed);

};


#endif /* INCLUDED_ComingSoonState */ 