// Generated by Haxe 4.1.5
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_BalancedTree
#include <haxe/ds/BalancedTree.h>
#endif
#ifndef INCLUDED_haxe_ds_TreeNode
#include <haxe/ds/TreeNode.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayIterator
#include <haxe/iterators/ArrayIterator.h>
#endif
#ifndef INCLUDED_haxe_iterators_MapKeyValueIterator
#include <haxe/iterators/MapKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2b87e0e433aaea52_41_new,"haxe.ds.BalancedTree","new",0xfb50b0cf,"haxe.ds.BalancedTree.new","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",41,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_51_set,"haxe.ds.BalancedTree","set",0xfb547c11,"haxe.ds.BalancedTree.set","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",51,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_61_get,"haxe.ds.BalancedTree","get",0xfb4b6105,"haxe.ds.BalancedTree.get","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",61,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_86_remove,"haxe.ds.BalancedTree","remove",0x68366b35,"haxe.ds.BalancedTree.remove","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",86,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_101_exists,"haxe.ds.BalancedTree","exists",0x238deccd,"haxe.ds.BalancedTree.exists","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",101,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_120_iterator,"haxe.ds.BalancedTree","iterator",0x998e771f,"haxe.ds.BalancedTree.iterator","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",120,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_130_keyValueIterator,"haxe.ds.BalancedTree","keyValueIterator",0x348d1391,"haxe.ds.BalancedTree.keyValueIterator","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",130,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_138_keys,"haxe.ds.BalancedTree","keys",0xe94e62a5,"haxe.ds.BalancedTree.keys","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",138,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_150_setLoop,"haxe.ds.BalancedTree","setLoop",0xe1a32b15,"haxe.ds.BalancedTree.setLoop","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",150,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_163_removeLoop,"haxe.ds.BalancedTree","removeLoop",0x52157c39,"haxe.ds.BalancedTree.removeLoop","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",163,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_181_keysLoop,"haxe.ds.BalancedTree","keysLoop",0x20d5eba9,"haxe.ds.BalancedTree.keysLoop","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",181,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_188_merge,"haxe.ds.BalancedTree","merge",0x620fbce7,"haxe.ds.BalancedTree.merge","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",188,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_198_minBinding,"haxe.ds.BalancedTree","minBinding",0xd2237344,"haxe.ds.BalancedTree.minBinding","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",198,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_202_removeMinBinding,"haxe.ds.BalancedTree","removeMinBinding",0xe82c3b68,"haxe.ds.BalancedTree.removeMinBinding","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",202,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_205_balance,"haxe.ds.BalancedTree","balance",0xf7f4e10b,"haxe.ds.BalancedTree.balance","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",205,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_226_compare,"haxe.ds.BalancedTree","compare",0x57d05c94,"haxe.ds.BalancedTree.compare","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",226,0xe74899d2)
HX_LOCAL_STACK_FRAME(_hx_pos_2b87e0e433aaea52_173_iteratorLoop,"haxe.ds.BalancedTree","iteratorLoop",0x3392c523,"haxe.ds.BalancedTree.iteratorLoop","/home/judeu/haxe/versions/4.1.5/std/haxe/ds/BalancedTree.hx",173,0xe74899d2)
namespace haxe{
namespace ds{

void BalancedTree_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_41_new)
            	}

Dynamic BalancedTree_obj::__CreateEmpty() { return new BalancedTree_obj; }

void *BalancedTree_obj::_hx_vtable = 0;

Dynamic BalancedTree_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BalancedTree_obj > _hx_result = new BalancedTree_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool BalancedTree_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4cc9cf7f;
}

static ::haxe::IMap_obj _hx_haxe_ds_BalancedTree__hx_haxe_IMap= {
	(  ::Dynamic (::hx::Object::*)( ::Dynamic))&::haxe::ds::BalancedTree_obj::get,
	( void (::hx::Object::*)( ::Dynamic, ::Dynamic))&::haxe::ds::BalancedTree_obj::set_dca24b06,
	( bool (::hx::Object::*)( ::Dynamic))&::haxe::ds::BalancedTree_obj::exists,
	( bool (::hx::Object::*)( ::Dynamic))&::haxe::ds::BalancedTree_obj::remove,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::BalancedTree_obj::keys,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::BalancedTree_obj::iterator,
	(  ::Dynamic (::hx::Object::*)())&::haxe::ds::BalancedTree_obj::keyValueIterator,
};

void BalancedTree_obj::set_dca24b06( ::Dynamic k, ::Dynamic v) {
			set(k,v);
}
void *BalancedTree_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x09c2bd39: return &_hx_haxe_ds_BalancedTree__hx_haxe_IMap;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void BalancedTree_obj::set( ::Dynamic key, ::Dynamic value){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_51_set)
HXDLIN(  51)		this->root = this->setLoop(key,value,this->root);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,set,(void))

 ::Dynamic BalancedTree_obj::get( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_61_get)
HXLINE(  62)		 ::haxe::ds::TreeNode node = this->root;
HXLINE(  63)		while(::hx::IsNotNull( node )){
HXLINE(  64)			int c = this->compare(key,node->key);
HXLINE(  65)			if ((c == 0)) {
HXLINE(  66)				return node->value;
            			}
HXLINE(  67)			if ((c < 0)) {
HXLINE(  68)				node = node->left;
            			}
            			else {
HXLINE(  70)				node = node->right;
            			}
            		}
HXLINE(  72)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,get,return )

bool BalancedTree_obj::remove( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_86_remove)
HXDLIN(  86)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE(  87)			this->root = this->removeLoop(key,this->root);
HXLINE(  88)			return true;
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE(   1)				{
HXLINE(   1)					null();
            				}
HXLINE(  86)				if (::Std_obj::isOfType(::haxe::Exception_obj::caught(_g)->unwrap(),::hx::ClassOf< ::String >())) {
HXLINE(  90)					return false;
            				}
            				else {
HXDLIN(  86)					HX_STACK_DO_THROW(_g);
            				}
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXDLIN(  86)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,remove,return )

bool BalancedTree_obj::exists( ::Dynamic key){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_101_exists)
HXLINE( 102)		 ::haxe::ds::TreeNode node = this->root;
HXLINE( 103)		while(::hx::IsNotNull( node )){
HXLINE( 104)			int c = this->compare(key,node->key);
HXLINE( 105)			if ((c == 0)) {
HXLINE( 106)				return true;
            			}
            			else {
HXLINE( 107)				if ((c < 0)) {
HXLINE( 108)					node = node->left;
            				}
            				else {
HXLINE( 110)					node = node->right;
            				}
            			}
            		}
HXLINE( 112)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,exists,return )

 ::Dynamic BalancedTree_obj::iterator(){
            	HX_GC_STACKFRAME(&_hx_pos_2b87e0e433aaea52_120_iterator)
HXLINE( 121)		::cpp::VirtualArray ret = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 122)		::haxe::ds::BalancedTree_obj::iteratorLoop(this->root,ret);
HXLINE( 123)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,ret);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BalancedTree_obj,iterator,return )

 ::Dynamic BalancedTree_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_2b87e0e433aaea52_130_keyValueIterator)
HXDLIN( 130)		return  ::haxe::iterators::MapKeyValueIterator_obj::__alloc( HX_CTX ,::hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(BalancedTree_obj,keyValueIterator,return )

 ::Dynamic BalancedTree_obj::keys(){
            	HX_GC_STACKFRAME(&_hx_pos_2b87e0e433aaea52_138_keys)
HXLINE( 139)		::cpp::VirtualArray ret = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 140)		this->keysLoop(this->root,ret);
HXLINE( 141)		return  ::haxe::iterators::ArrayIterator_obj::__alloc( HX_CTX ,ret);
            	}


HX_DEFINE_DYNAMIC_FUNC0(BalancedTree_obj,keys,return )

 ::haxe::ds::TreeNode BalancedTree_obj::setLoop( ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode node){
            	HX_GC_STACKFRAME(&_hx_pos_2b87e0e433aaea52_150_setLoop)
HXLINE( 151)		if (::hx::IsNull( node )) {
HXLINE( 152)			return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,null(),k,v,null(),null());
            		}
HXLINE( 153)		int c = this->compare(k,node->key);
HXLINE( 154)		if ((c == 0)) {
HXLINE( 154)			int _hx_tmp;
HXDLIN( 154)			if (::hx::IsNull( node )) {
HXLINE( 154)				_hx_tmp = 0;
            			}
            			else {
HXLINE( 154)				_hx_tmp = node->_height;
            			}
HXDLIN( 154)			return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,node->left,k,v,node->right,_hx_tmp);
            		}
            		else {
HXLINE( 154)			if ((c < 0)) {
HXLINE( 155)				 ::haxe::ds::TreeNode nl = this->setLoop(k,v,node->left);
HXLINE( 156)				return this->balance(nl,node->key,node->value,node->right);
            			}
            			else {
HXLINE( 158)				 ::haxe::ds::TreeNode nr = this->setLoop(k,v,node->right);
HXLINE( 159)				return this->balance(node->left,node->key,node->value,nr);
            			}
            		}
HXLINE( 154)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(BalancedTree_obj,setLoop,return )

 ::haxe::ds::TreeNode BalancedTree_obj::removeLoop( ::Dynamic k, ::haxe::ds::TreeNode node){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_163_removeLoop)
HXLINE( 164)		if (::hx::IsNull( node )) {
HXLINE( 165)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not_found",b6,92,a5,ea)));
            		}
HXLINE( 166)		int c = this->compare(k,node->key);
HXLINE( 167)		if ((c == 0)) {
HXLINE( 167)			return this->merge(node->left,node->right);
            		}
            		else {
HXLINE( 168)			if ((c < 0)) {
HXLINE( 168)				 ::haxe::ds::TreeNode _hx_tmp = this->removeLoop(k,node->left);
HXDLIN( 168)				return this->balance(_hx_tmp,node->key,node->value,node->right);
            			}
            			else {
HXLINE( 169)				 ::haxe::ds::TreeNode node1 = node->left;
HXDLIN( 169)				 ::Dynamic node2 = node->key;
HXDLIN( 169)				 ::Dynamic node3 = node->value;
HXDLIN( 169)				return this->balance(node1,node2,node3,this->removeLoop(k,node->right));
            			}
            		}
HXLINE( 167)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,removeLoop,return )

void BalancedTree_obj::keysLoop( ::haxe::ds::TreeNode node,::cpp::VirtualArray acc){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_181_keysLoop)
HXDLIN( 181)		if (::hx::IsNotNull( node )) {
HXLINE( 182)			this->keysLoop(node->left,acc);
HXLINE( 183)			acc->push(node->key);
HXLINE( 184)			this->keysLoop(node->right,acc);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,keysLoop,(void))

 ::haxe::ds::TreeNode BalancedTree_obj::merge( ::haxe::ds::TreeNode t1, ::haxe::ds::TreeNode t2){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_188_merge)
HXLINE( 189)		if (::hx::IsNull( t1 )) {
HXLINE( 190)			return t2;
            		}
HXLINE( 191)		if (::hx::IsNull( t2 )) {
HXLINE( 192)			return t1;
            		}
HXLINE( 193)		 ::haxe::ds::TreeNode t = this->minBinding(t2);
HXLINE( 194)		 ::Dynamic t3 = t->key;
HXDLIN( 194)		 ::Dynamic t4 = t->value;
HXDLIN( 194)		return this->balance(t1,t3,t4,this->removeMinBinding(t2));
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,merge,return )

 ::haxe::ds::TreeNode BalancedTree_obj::minBinding( ::haxe::ds::TreeNode t){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_198_minBinding)
HXDLIN( 198)		if (::hx::IsNull( t )) {
HXDLIN( 198)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Not_found",b6,92,a5,ea)));
            		}
            		else {
HXDLIN( 198)			if (::hx::IsNull( t->left )) {
HXDLIN( 198)				return t;
            			}
            			else {
HXDLIN( 198)				return this->minBinding(t->left);
            			}
            		}
HXDLIN( 198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,minBinding,return )

 ::haxe::ds::TreeNode BalancedTree_obj::removeMinBinding( ::haxe::ds::TreeNode t){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_202_removeMinBinding)
HXDLIN( 202)		if (::hx::IsNull( t->left )) {
HXDLIN( 202)			return t->right;
            		}
            		else {
HXDLIN( 202)			 ::haxe::ds::TreeNode _hx_tmp = this->removeMinBinding(t->left);
HXDLIN( 202)			return this->balance(_hx_tmp,t->key,t->value,t->right);
            		}
HXDLIN( 202)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC1(BalancedTree_obj,removeMinBinding,return )

 ::haxe::ds::TreeNode BalancedTree_obj::balance( ::haxe::ds::TreeNode l, ::Dynamic k, ::Dynamic v, ::haxe::ds::TreeNode r){
            	HX_GC_STACKFRAME(&_hx_pos_2b87e0e433aaea52_205_balance)
HXLINE( 206)		int hl;
HXDLIN( 206)		if (::hx::IsNull( l )) {
HXLINE( 206)			hl = 0;
            		}
            		else {
HXLINE( 206)			hl = l->_height;
            		}
HXLINE( 207)		int hr;
HXDLIN( 207)		if (::hx::IsNull( r )) {
HXLINE( 207)			hr = 0;
            		}
            		else {
HXLINE( 207)			hr = r->_height;
            		}
HXLINE( 208)		if ((hl > (hr + 2))) {
HXLINE( 209)			 ::haxe::ds::TreeNode _this = l->left;
HXDLIN( 209)			int _hx_tmp;
HXDLIN( 209)			if (::hx::IsNull( _this )) {
HXLINE( 209)				_hx_tmp = 0;
            			}
            			else {
HXLINE( 209)				_hx_tmp = _this->_height;
            			}
HXDLIN( 209)			 ::haxe::ds::TreeNode _this1 = l->right;
HXDLIN( 209)			int _hx_tmp1;
HXDLIN( 209)			if (::hx::IsNull( _this1 )) {
HXLINE( 209)				_hx_tmp1 = 0;
            			}
            			else {
HXLINE( 209)				_hx_tmp1 = _this1->_height;
            			}
HXDLIN( 209)			if ((_hx_tmp >= _hx_tmp1)) {
HXLINE( 210)				 ::haxe::ds::TreeNode l1 = l->left;
HXDLIN( 210)				 ::Dynamic l2 = l->key;
HXDLIN( 210)				 ::Dynamic l3 = l->value;
HXDLIN( 210)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l1,l2,l3, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->right,k,v,r,null()),null());
            			}
            			else {
HXLINE( 212)				 ::haxe::ds::TreeNode _hx_tmp =  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->left,l->key,l->value,l->right->left,null());
HXDLIN( 212)				 ::Dynamic l1 = l->right->key;
HXDLIN( 212)				 ::Dynamic l2 = l->right->value;
HXDLIN( 212)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,_hx_tmp,l1,l2, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l->right->right,k,v,r,null()),null());
            			}
            		}
            		else {
HXLINE( 214)			if ((hr > (hl + 2))) {
HXLINE( 215)				 ::haxe::ds::TreeNode _this = r->right;
HXDLIN( 215)				int _hx_tmp;
HXDLIN( 215)				if (::hx::IsNull( _this )) {
HXLINE( 215)					_hx_tmp = 0;
            				}
            				else {
HXLINE( 215)					_hx_tmp = _this->_height;
            				}
HXDLIN( 215)				 ::haxe::ds::TreeNode _this1 = r->left;
HXDLIN( 215)				int _hx_tmp1;
HXDLIN( 215)				if (::hx::IsNull( _this1 )) {
HXLINE( 215)					_hx_tmp1 = 0;
            				}
            				else {
HXLINE( 215)					_hx_tmp1 = _this1->_height;
            				}
HXDLIN( 215)				if ((_hx_tmp > _hx_tmp1)) {
HXLINE( 216)					return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX , ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r->left,null()),r->key,r->value,r->right,null());
            				}
            				else {
HXLINE( 218)					 ::haxe::ds::TreeNode _hx_tmp =  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r->left->left,null());
HXDLIN( 218)					 ::Dynamic r1 = r->left->key;
HXDLIN( 218)					 ::Dynamic r2 = r->left->value;
HXDLIN( 218)					return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,_hx_tmp,r1,r2, ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,r->left->right,r->key,r->value,r->right,null()),null());
            				}
            			}
            			else {
HXLINE( 221)				int _hx_tmp;
HXDLIN( 221)				if ((hl > hr)) {
HXLINE( 221)					_hx_tmp = hl;
            				}
            				else {
HXLINE( 221)					_hx_tmp = hr;
            				}
HXDLIN( 221)				return  ::haxe::ds::TreeNode_obj::__alloc( HX_CTX ,l,k,v,r,(_hx_tmp + 1));
            			}
            		}
HXLINE( 208)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(BalancedTree_obj,balance,return )

int BalancedTree_obj::compare( ::Dynamic k1, ::Dynamic k2){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_226_compare)
HXDLIN( 226)		return ::Reflect_obj::compare(k1,k2);
            	}


HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,compare,return )

void BalancedTree_obj::iteratorLoop( ::haxe::ds::TreeNode node,::cpp::VirtualArray acc){
            	HX_STACKFRAME(&_hx_pos_2b87e0e433aaea52_173_iteratorLoop)
HXDLIN( 173)		if (::hx::IsNotNull( node )) {
HXLINE( 174)			::haxe::ds::BalancedTree_obj::iteratorLoop(node->left,acc);
HXLINE( 175)			acc->push(node->value);
HXLINE( 176)			::haxe::ds::BalancedTree_obj::iteratorLoop(node->right,acc);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(BalancedTree_obj,iteratorLoop,(void))


::hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__new() {
	::hx::ObjectPtr< BalancedTree_obj > __this = new BalancedTree_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< BalancedTree_obj > BalancedTree_obj::__alloc(::hx::Ctx *_hx_ctx) {
	BalancedTree_obj *__this = (BalancedTree_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BalancedTree_obj), true, "haxe.ds.BalancedTree"));
	*(void **)__this = BalancedTree_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

BalancedTree_obj::BalancedTree_obj()
{
}

void BalancedTree_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BalancedTree);
	HX_MARK_MEMBER_NAME(root,"root");
	HX_MARK_END_CLASS();
}

void BalancedTree_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(root,"root");
}

::hx::Val BalancedTree_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"set") ) { return ::hx::Val( set_dyn() ); }
		if (HX_FIELD_EQ(inName,"get") ) { return ::hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { return ::hx::Val( root ); }
		if (HX_FIELD_EQ(inName,"keys") ) { return ::hx::Val( keys_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"exists") ) { return ::hx::Val( exists_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"setLoop") ) { return ::hx::Val( setLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"balance") ) { return ::hx::Val( balance_dyn() ); }
		if (HX_FIELD_EQ(inName,"compare") ) { return ::hx::Val( compare_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"keysLoop") ) { return ::hx::Val( keysLoop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"removeLoop") ) { return ::hx::Val( removeLoop_dyn() ); }
		if (HX_FIELD_EQ(inName,"minBinding") ) { return ::hx::Val( minBinding_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
		if (HX_FIELD_EQ(inName,"removeMinBinding") ) { return ::hx::Val( removeMinBinding_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BalancedTree_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"iteratorLoop") ) { outValue = iteratorLoop_dyn(); return true; }
	}
	return false;
}

::hx::Val BalancedTree_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"root") ) { root=inValue.Cast<  ::haxe::ds::TreeNode >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BalancedTree_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("root",22,ee,ae,4b));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BalancedTree_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::ds::TreeNode */ ,(int)offsetof(BalancedTree_obj,root),HX_("root",22,ee,ae,4b)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BalancedTree_obj_sStaticStorageInfo = 0;
#endif

static ::String BalancedTree_obj_sMemberFields[] = {
	HX_("root",22,ee,ae,4b),
	HX_("set",a2,9b,57,00),
	HX_("get",96,80,4e,00),
	HX_("remove",44,9c,88,04),
	HX_("exists",dc,1d,e0,bf),
	HX_("iterator",ee,49,9a,93),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("keys",f4,e1,06,47),
	HX_("setLoop",26,e7,3b,0d),
	HX_("removeLoop",c8,e0,d6,c4),
	HX_("keysLoop",78,be,e1,1a),
	HX_("merge",b8,a2,c6,05),
	HX_("minBinding",d3,d7,e4,44),
	HX_("removeMinBinding",37,f5,8d,fe),
	HX_("balance",1c,9d,8d,23),
	HX_("compare",a5,18,69,83),
	::String(null()) };

::hx::Class BalancedTree_obj::__mClass;

static ::String BalancedTree_obj_sStaticFields[] = {
	HX_("iteratorLoop",72,ab,e1,e4),
	::String(null())
};

void BalancedTree_obj::__register()
{
	BalancedTree_obj _hx_dummy;
	BalancedTree_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.ds.BalancedTree",5d,9d,3e,70);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BalancedTree_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BalancedTree_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BalancedTree_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BalancedTree_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BalancedTree_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BalancedTree_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace ds
