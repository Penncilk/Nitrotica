// Generated by Haxe 4.1.5
#ifndef INCLUDED_hscript__Interp_Stop
#define INCLUDED_hscript__Interp_Stop

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(hscript,_Interp,Stop)
namespace hscript{
namespace _Interp{


class Stop_obj : public ::hx::EnumBase_obj
{
	typedef ::hx::EnumBase_obj super;
		typedef Stop_obj OBJ_;

	public:
		Stop_obj() {};
		HX_DO_ENUM_RTTI;
		static void __boot();
		static void __register();
		static bool __GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::String GetEnumName( ) const { return HX_("hscript._Interp.Stop",b8,6b,de,d6); }
		::String __ToString() const { return HX_("Stop.",cc,81,43,17) + _hx_tag; }

		static ::hscript::_Interp::Stop SBreak;
		static inline ::hscript::_Interp::Stop SBreak_dyn() { return SBreak; }
		static ::hscript::_Interp::Stop SContinue;
		static inline ::hscript::_Interp::Stop SContinue_dyn() { return SContinue; }
		static ::hscript::_Interp::Stop SReturn;
		static inline ::hscript::_Interp::Stop SReturn_dyn() { return SReturn; }
};

} // end namespace hscript
} // end namespace _Interp

#endif /* INCLUDED_hscript__Interp_Stop */ 
