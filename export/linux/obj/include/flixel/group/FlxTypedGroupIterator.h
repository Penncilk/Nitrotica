// Generated by Haxe 4.1.5
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#define INCLUDED_flixel_group_FlxTypedGroupIterator

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_a2c5aad29e94c731_930_new)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroupIterator)

namespace flixel{
namespace group{


class HXCPP_CLASS_ATTRIBUTES FlxTypedGroupIterator_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef FlxTypedGroupIterator_obj OBJ_;
		FlxTypedGroupIterator_obj();

	public:
		enum { _hx_ClassId = 0x60334532 };

		void __construct(::cpp::VirtualArray GroupMembers, ::Dynamic filter);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.group.FlxTypedGroupIterator")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel.group.FlxTypedGroupIterator"); }

		inline static ::hx::ObjectPtr< FlxTypedGroupIterator_obj > __new(::cpp::VirtualArray GroupMembers, ::Dynamic filter) {
			::hx::ObjectPtr< FlxTypedGroupIterator_obj > __this = new FlxTypedGroupIterator_obj();
			__this->__construct(GroupMembers,filter);
			return __this;
		}

		inline static ::hx::ObjectPtr< FlxTypedGroupIterator_obj > __alloc(::hx::Ctx *_hx_ctx,::cpp::VirtualArray GroupMembers, ::Dynamic filter) {
			FlxTypedGroupIterator_obj *__this = (FlxTypedGroupIterator_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedGroupIterator_obj), true, "flixel.group.FlxTypedGroupIterator"));
			*(void **)__this = FlxTypedGroupIterator_obj::_hx_vtable;
{
            	HX_STACKFRAME(&_hx_pos_a2c5aad29e94c731_930_new)
HXLINE( 931)		( ( ::flixel::group::FlxTypedGroupIterator)(__this) )->_groupMembers = GroupMembers;
HXLINE( 932)		( ( ::flixel::group::FlxTypedGroupIterator)(__this) )->_filter = filter;
HXLINE( 933)		( ( ::flixel::group::FlxTypedGroupIterator)(__this) )->_cursor = 0;
HXLINE( 934)		( ( ::flixel::group::FlxTypedGroupIterator)(__this) )->_length = ( ( ::flixel::group::FlxTypedGroupIterator)(__this) )->_groupMembers->get_length();
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxTypedGroupIterator_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxTypedGroupIterator",75,12,8f,24); }

		::cpp::VirtualArray _groupMembers;
		 ::Dynamic _filter;
		Dynamic _filter_dyn() { return _filter;}
		int _cursor;
		int _length;
		 ::Dynamic next();
		::Dynamic next_dyn();

		bool hasNext();
		::Dynamic hasNext_dyn();

};

} // end namespace flixel
} // end namespace group

#endif /* INCLUDED_flixel_group_FlxTypedGroupIterator */ 
