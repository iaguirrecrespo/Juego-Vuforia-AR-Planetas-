#include "pch-cpp.hpp"





struct VirtualActionInvoker0
{
	typedef void (*Action)(void*,const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*,T1,T2,const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj,p1,p2,invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1;
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};

struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7;
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3;
struct Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E;
struct Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C;
struct ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194;
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD;
struct Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9;
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB;
struct Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA;
struct Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8;
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA;
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E;
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9;
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E;
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9;
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D;
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE;
struct Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C;
struct Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110;
struct Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A;
struct Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2;
struct Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1;
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169;
struct Func_2_tF489B2B253E957377765FE439B765B21FD00697A;
struct Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0;
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595;
struct Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA;
struct Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD;
struct Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8;
struct Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E;
struct Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4;
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F;
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9;
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
struct IEnumerable_1_tCE8ADB0B15EA7493B4381908846BC62307C137C3;
struct IEnumerable_1_tFCB3E41202F3CC65C7DE9B40C22F196A081E84D6;
struct IEnumerable_1_t6AD47CB8BEC813E15985AA93F7394F6ECE74088A;
struct IEnumerable_1_t101D1ED4FD2E11F59AE617F3A394F7AA0A21C585;
struct IEnumerable_1_t5359DEC999AA35C7E2DE775B0455A4760550ED7F;
struct IEnumerable_1_t352FDDEA001ABE8E1D67849D2E2F3D1D75B03D41;
struct IEnumerable_1_t6C47A8FE62321E6AD75C312B8549AFD2B13F0591;
struct IEnumerable_1_t5C1E5CDFEA99062D152E83B174072FEDB9763788;
struct IEnumerable_1_tD5C0FD17E45BB16A64310D831E29C350A184590F;
struct IEnumerable_1_t6D5FFB1B4A97F30426C5D394135AD0D2FAEAE680;
struct IEnumerable_1_t9C73E2DA2A24734B7BEE3997930B156A82172C56;
struct IEnumerator_1_t402833552EE251A8377359B2B083EB70C4FF7A48;
struct IEnumerator_1_t48F4900A82CAF9059C2FEB04454888B64E155362;
struct IEnumerator_1_t488F9FA82247BF8D2DC5E133C1C3F9366CDED9B0;
struct IEnumerator_1_tE9D1C7A5287039A2077BA3B539B100F0E12F3A6C;
struct IEnumerator_1_t6999C610E1C05F2C90151CD5C41E24528ACB3255;
struct IEnumerator_1_t736E9F8BD2FD38A5E9EA2E8A510AFED788D05010;
struct IEnumerator_1_tC0C08C9659581E6A592DEEC8CEE4A412A400B773;
struct IEnumerator_1_tD1458B7D83AB52223A503862617A8A15E008EE1E;
struct IEnumerator_1_t1DC9BF0C441509977AE52846CAE10D10A21C5FE0;
struct IEnumerator_1_tB41B292FAFD525FC5C54D7E469F0BA1A193CA8B1;
struct IEnumerator_1_tF74C952F97E24A4AFD21162637D82942513CB35B;
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
struct Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026;
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5;
struct Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE;
struct Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72;
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D;
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E;
struct Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC;
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E;
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E;
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32;
struct Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831;
struct KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5;
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255;
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A;
struct SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158;
struct ThreadLocal_1_tE778CDE74B6D2A24B1BB4069B959CE39005AC0EE;
struct ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81;
struct WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875;
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D;
struct WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D;
struct WhereEnumerableIterator_1_tF06AE70CD84FEA860C208FEC06EAD32B08C899A0;
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C;
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C;
struct WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75;
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E;
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9;
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2;
struct WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04;
struct WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA;
struct WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F;
struct WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285;
struct WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797;
struct WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10;
struct WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9;
struct WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE;
struct WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650;
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E;
struct WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F;
struct WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212;
struct WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE;
struct WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03;
struct WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C;
struct XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402;
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D;
struct XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD;
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0;
struct XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44;
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50;
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C;
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108;
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539;
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388;
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A;
struct fsDirectConverter_1_t9ADDD5AED0C9FF81B738068C90D344C66801CB57;
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD;
struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct __Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297;
struct fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F;
struct JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
struct Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242;
struct Type_t;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04;
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23;
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668;
struct fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC;

IL2CPP_EXTERN_C RuntimeClass* AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F;
IL2CPP_EXTERN_C const RuntimeMethod* AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com;
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke;

struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9;
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tCFEDD9B392BFDE2D313BC0974DB2CABF3A7A893D* ____entries;
	int32_t ____count;
	int32_t ____freeList;
	int32_t ____freeCount;
	int32_t ____version;
	RuntimeObject* ____comparer;
	KeyCollection_t018A8DACA62B00F41314B17E9BB03E1169319CA5* ____keys;
	ValueCollection_t26762FBAABEED8AF6FEC2532717F621A053E1E81* ____values;
	RuntimeObject* ____syncRoot;
};
struct Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	bool ___current;
};
struct Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	float ___current;
};
struct Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Il2CppSharedGenericObject* ___current;
};
struct Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	int32_t ___current;
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255  : public RuntimeObject
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A  : public RuntimeObject
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ____extractKey;
};
struct XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets;
	EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* ____entries;
	int32_t ____numEntries;
	ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ____extractKey;
};
struct XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD  : public RuntimeObject
{
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* ____state;
};
struct XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0  : public RuntimeObject
{
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* ____state;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	bool ___U3CrunningU3Ek__BackingField;
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04  : public RuntimeObject
{
	fsSerializer_t770DD30E2427CF63ECAEF61D7A1D1D178CECB3DC* ___Serializer;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23  : public RuntimeObject
{
	RuntimeObject* ____value;
};
struct Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 
{
	Il2CppSharedGenericObject* ___Value;
	int32_t ___HashCode;
	int32_t ___Next;
};
typedef Il2CppFullySharedGenericStruct Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E;
struct Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ____list;
	int32_t ____index;
	int32_t ____version;
	int32_t ____current;
};
struct SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	Il2CppSharedGenericObject* ___U3CsubsystemDescriptorU3Ek__BackingField;
	Il2CppSharedGenericObject* ___U3CproviderU3Ek__BackingField;
};
struct ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A 
{
	Il2CppSharedGenericObject* ___Item1;
	Il2CppSharedGenericObject* ___Item2;
};
struct WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	RuntimeObject* ___source;
	Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	RuntimeObject* ___source;
	Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	RuntimeObject* ___source;
	Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04  : public Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831
{
	RuntimeObject* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44 
{
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809 
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data;
	int32_t ___m_Start;
	int32_t ___m_Length;
};
typedef Il2CppFullySharedGenericStruct fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct Guid_t 
{
	int32_t ____a;
	int16_t ____b;
	int16_t ____c;
	uint8_t ____d;
	uint8_t ____e;
	uint8_t ____f;
	uint8_t ____g;
	uint8_t ____h;
	uint8_t ____i;
	uint8_t ____j;
	uint8_t ____k;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 
{
	String_t* ___m_StringOriginalCase;
	String_t* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_pinvoke
{
	char* ___m_StringOriginalCase;
	char* ___m_StringLowerCase;
};
struct InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735_marshaled_com
{
	Il2CppChar* ___m_StringOriginalCase;
	Il2CppChar* ___m_StringLowerCase;
};
struct Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 
{
	float ___m_Time;
	float ___m_Value;
	float ___m_InTangent;
	float ___m_OutTangent;
	int32_t ___m_WeightedMode;
	float ___m_InWeight;
	float ___m_OutWeight;
};
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	int32_t ___m_Mask;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	float ___m_XMin;
	float ___m_YMin;
	float ___m_Width;
	float ___m_Height;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849 
{
	String_t* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke
{
	char* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com
{
	Il2CppChar* ___m_String;
	int32_t ___m_Index;
	int32_t ___m_Length;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668  : public fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04
{
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 
{
	bool ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_pinvoke
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_marshaled_com
{
	int32_t ____success;
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ____messages;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 
{
	fsVersionedTypeU5BU5D_tF4A5B18C49769943892747B1A1040CAE86746E1F* ___Ancestors;
	String_t* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_pinvoke* ___Ancestors;
	char* ___VersionString;
	Type_t* ___ModelType;
};
struct fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com
{
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8_marshaled_com* ___Ancestors;
	Il2CppChar* ___VersionString;
	Type_t* ___ModelType;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex;
	uint16_t ___lightBufferIndex;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light;
};
struct Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A ___current;
};
struct Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Guid_t ___current;
};
struct Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	intptr_t ___current;
};
struct Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 ___current;
};
struct Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___current;
};
struct Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___current;
};
struct Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E  : public RuntimeObject
{
	int32_t ___threadId;
	int32_t ___state;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___current;
};
struct WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797  : public Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44  : public SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158
{
};
struct fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_t9ADDD5AED0C9FF81B738068C90D344C66801CB57  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD  : public fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668
{
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A 
{
	bool ____hasValue;
	fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ____value;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction;
};
struct Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Origin;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Direction;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct XRPermissionState_tA8B1D6D887EE6DB0EC0057CF231BD892B4BFB405 
{
	int32_t ___value__;
};
struct XRSubsystemStartOptions_t119BC62619A86959AA8FC5A547BF0B7998EC33B0 
{
	int32_t ___value__;
};
struct fsDataType_t4DDBD7DB585B530CF852D23D5FF4D9801DDE4A16 
{
	int32_t ___value__;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB 
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849 ___text;
	bool ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_pinvoke ___text;
	int32_t ___hasEscapes;
};
struct JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com
{
	Substring_t2E16755269E6716C22074D6BC0A9099915E67849_marshaled_com ___text;
	int32_t ___hasEscapes;
};
struct JsonValueType_t36BA339F107E5E9C0966C45F896E27F3BCC5A2AB 
{
	int32_t ___value__;
};
struct StatusCode_tB2BCF980A5E9E723CE4E05146B7F9CC89EB5BF4B 
{
	int32_t ___value__;
};
struct WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875  : public Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026
{
	RuntimeObject* ___source;
	Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	RuntimeObject* ___source;
	Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tF06AE70CD84FEA860C208FEC06EAD32B08C899A0  : public Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72
{
	RuntimeObject* ___source;
	Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	RuntimeObject* ___source;
	Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	RuntimeObject* ___source;
	Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	RuntimeObject* ___source;
	Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	RuntimeObject* ___source;
	Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___predicate;
	RuntimeObject* ___enumerator;
};
struct WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___source;
	Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___predicate;
	Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* ___selector;
	Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 ___enumerator;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 
{
	int32_t ___m_StatusCode;
	int32_t ___m_NativeStatusCode;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2 
{
	int32_t ___type;
	bool ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	RuntimeObject* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_pinvoke
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_pinvoke ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct JsonValue_t01DB320267C848E729A400EF2345979978F851D2_marshaled_com
{
	int32_t ___type;
	int32_t ___boolValue;
	double ___realValue;
	int64_t ___integerValue;
	JsonString_tE22CDDA995FEFF514F3F334C93B6AB31B49773CB_marshaled_com ___stringValue;
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___arrayValue;
	Dictionary_2_t6682243BDABA638FCBE4F1D9875B5B1455A7686E* ___objectValue;
	Il2CppIUnknown* ___anyValue;
};
struct Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7  : public RuntimeObject
{
	Awaitable_t690337FEC1C411606E233EA36A41337B931C23CB* ____awaitable;
	XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ____result;
};
struct Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB 
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ____list;
	int32_t ____index;
	int32_t ____version;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ____current;
};
struct ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194  : public MulticastDelegate_t
{
};
struct ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD  : public MulticastDelegate_t
{
};
struct Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9  : public MulticastDelegate_t
{
};
struct Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB  : public MulticastDelegate_t
{
};
struct Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA  : public MulticastDelegate_t
{
};
struct Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8  : public MulticastDelegate_t
{
};
struct Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA  : public MulticastDelegate_t
{
};
struct Func_2_t49E998685259ADE759F9329BF66F20DE8667006E  : public MulticastDelegate_t
{
};
struct Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9  : public MulticastDelegate_t
{
};
struct Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E  : public MulticastDelegate_t
{
};
struct Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9  : public MulticastDelegate_t
{
};
struct Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D  : public MulticastDelegate_t
{
};
struct Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE  : public MulticastDelegate_t
{
};
struct Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C  : public MulticastDelegate_t
{
};
struct Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110  : public MulticastDelegate_t
{
};
struct Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A  : public MulticastDelegate_t
{
};
struct Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2  : public MulticastDelegate_t
{
};
struct Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1  : public MulticastDelegate_t
{
};
struct Func_2_t93FE63D487003DC89C264F70099E05071B9C1169  : public MulticastDelegate_t
{
};
struct Func_2_tF489B2B253E957377765FE439B765B21FD00697A  : public MulticastDelegate_t
{
};
struct Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0  : public MulticastDelegate_t
{
};
struct Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595  : public MulticastDelegate_t
{
};
struct Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA  : public MulticastDelegate_t
{
};
struct Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD  : public MulticastDelegate_t
{
};
struct Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8  : public MulticastDelegate_t
{
};
struct Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E  : public MulticastDelegate_t
{
};
struct Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4  : public MulticastDelegate_t
{
};
struct Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F  : public MulticastDelegate_t
{
};
struct Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9  : public MulticastDelegate_t
{
};
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10  : public Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9  : public Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE  : public Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_tF489B2B253E957377765FE439B765B21FD00697A* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650  : public Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E  : public Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F  : public Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212  : public Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE  : public Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03  : public Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C  : public Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32
{
	List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___source;
	Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___predicate;
	Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___selector;
	Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB ___enumerator;
};
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};
struct List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255_StaticFields
{
	__Il2CppInt32EnumU5BU5D_t8FBDB13799B3615AA893F06F601FF09189B04297* ___s_emptyArray;
};
struct List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A_StaticFields
{
	JsonValueU5BU5D_tCC9BDCF1DE43F923B72BEF6FE9AB4FBAEF445DB3* ___s_emptyArray;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_StaticFields
{
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___True;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___False;
	fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___Null;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Guid_t_StaticFields
{
	Guid_t ___Empty;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_StaticFields
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___kZero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields
{
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___EmptyStringArray;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___Success;
};
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize;
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex;
};
struct fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A_StaticFields
{
	fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A ___Empty;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
struct Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7_StaticFields
{
	ThreadLocal_1_tE778CDE74B6D2A24B1BB4069B959CE39005AC0EE* ____pool;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 m_Items[1];

	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 value)
	{
		m_Items[index] = value;
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light), (void*)NULL);
	}
};
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
struct EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 m_Items[1];

	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t7B8C5DB52D4C1F9520F7221370B8533C1F695F85 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value), (void*)NULL);
	}
};
struct EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m34E41EF283CEEC21BBBE40E5F2F5855354EFB35B_gshared (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mC7591D3253947956E5574DC42E8B84FBF93404C6_gshared_inline (Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023 (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2912FCFC4D310E20566993B2BD55CE4775FBB643_gshared (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mBA35EFC7B56DE1159A217041A0E34B248ABD65AD_gshared_inline (Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___0_source, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316_gshared (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_gshared_inline (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* __this, int32_t ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9_gshared (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD20BD2FCE2D8E1715B54E746D94A9FC4D77F97ED_gshared (Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEA3D3B0F517F42E658D17D4B223865735C7B774F_gshared (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A Func_2_Invoke_mE87CCCF30117045DFD52777A0F83BB1A126A9C0A_gshared_inline (Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mF63228862E8BB95F351484D23AAECC612B67987A_gshared (WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96 (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF1B366622F25F80FCC3B4A235B88A3E1F8D3C81B (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* __this, RuntimeObject* ___0_source, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m05472D4DD3029A7DD704095C3F0D22A52123AFEE (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_tF489B2B253E957377765FE439B765B21FD00697A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_m630044D76C3678FABF3039C408414DBF09F888DA_inline (Func_2_tF489B2B253E957377765FE439B765B21FD00697A* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626 (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* __this, RuntimeObject* ___0_source, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m98A578B694496F75474ED794F19A2EE9AE369007 (Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE3F737784DFE75EBA3BE4B8361412E47C27F2D25 (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Func_2_Invoke_m9DF107DE50A7DAE57EF88ADC7A12CB87601075FE_inline (Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F54F0F081789787C26A96B06C7BE668C27D1F18 (WhereEnumerableIterator_1_tF06AE70CD84FEA860C208FEC06EAD32B08C899A0* __this, RuntimeObject* ___0_source, Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBE6E9D498755C8BEBE9029C04B84419AA1B85105 (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m275B0F1435986A6E7C5B02F3E0A626D021CE2979_inline (Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984 (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* __this, RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5001400E4D987C4E2D033271C3308D3C029E33A0 (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m2DB2FE564D96E2AB370DD99BBE73E71E82813584_inline (Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* __this, RuntimeObject* ___0_source, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBEAA4B1591E30B8501780244180396B533CB2B14 (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m7C5D52D1A7031FA965122214AA3EC86A04626CB1_inline (Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEE39AB604B9E4A1CB0EBCCAB2425D479966AE8E5 (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m3340B81F75358EF5AD42BFD3182D073B2DD085EF_inline (Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_gshared_inline (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_fshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04 (XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9_gshared (SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared (Dictionary_2_tB3BF685342B8A1AB5995EE46B7014CBC0B281D5C* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* __this, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_m34E41EF283CEEC21BBBE40E5F2F5855354EFB35B (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m34E41EF283CEEC21BBBE40E5F2F5855354EFB35B_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8 (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 (*) (List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, const RuntimeMethod*))List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8_gshared)(__this, method);
}
inline int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline)(__this, method);
}
inline bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  bool (*) (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, int32_t, const RuntimeMethod*))Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline)(__this, ___0_arg, method);
}
inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mC7591D3253947956E5574DC42E8B84FBF93404C6_inline (Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*) (Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C*, int32_t, const RuntimeMethod*))Func_2_Invoke_mC7591D3253947956E5574DC42E8B84FBF93404C6_gshared_inline)(__this, ___0_arg, method);
}
inline bool Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*, const RuntimeMethod*))Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023 (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* __this, RuntimeObject* ___0_source, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* __this, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_m2912FCFC4D310E20566993B2BD55CE4775FBB643 (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m2912FCFC4D310E20566993B2BD55CE4775FBB643_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mBA35EFC7B56DE1159A217041A0E34B248ABD65AD_inline (Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*) (Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110*, int32_t, const RuntimeMethod*))Func_2_Invoke_mBA35EFC7B56DE1159A217041A0E34B248ABD65AD_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* __this, RuntimeObject* ___0_source, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___1_predicate, const RuntimeMethod* method) ;
inline void Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*, const RuntimeMethod*))Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5 (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A*, int32_t, const RuntimeMethod*))Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377 (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* __this, RuntimeObject* ___0_source, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*, RuntimeObject*, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316 (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*, const RuntimeMethod*))Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25 (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797*, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline int32_t Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_inline (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* __this, int32_t ___0_arg, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2*, int32_t, const RuntimeMethod*))Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_gshared_inline)(__this, ___0_arg, method);
}
inline void WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9 (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04* __this, RuntimeObject* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04*, RuntimeObject*, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9_gshared)(__this, ___0_source, ___1_predicate, method);
}
inline void Iterator_1__ctor_mD20BD2FCE2D8E1715B54E746D94A9FC4D77F97ED (Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026* __this, const RuntimeMethod* method)
{
	((  void (*) (Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*, const RuntimeMethod*))Iterator_1__ctor_mD20BD2FCE2D8E1715B54E746D94A9FC4D77F97ED_gshared)(__this, method);
}
inline void WhereSelectListIterator_2__ctor_mEA3D3B0F517F42E658D17D4B223865735C7B774F (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_mEA3D3B0F517F42E658D17D4B223865735C7B774F_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13 (List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
inline ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A Func_2_Invoke_mE87CCCF30117045DFD52777A0F83BB1A126A9C0A_inline (Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A (*) (Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_mE87CCCF30117045DFD52777A0F83BB1A126A9C0A_gshared_inline)(__this, ___0_arg, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) ;
inline void WhereEnumerableIterator_1__ctor_mF63228862E8BB95F351484D23AAECC612B67987A (WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875* __this, RuntimeObject* ___0_source, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___1_predicate, const RuntimeMethod* method)
{
	((  void (*) (WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875*, RuntimeObject*, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9*, const RuntimeMethod*))WhereEnumerableIterator_1__ctor_mF63228862E8BB95F351484D23AAECC612B67987A_gshared)(__this, ___0_source, ___1_predicate, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96 (Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF1B366622F25F80FCC3B4A235B88A3E1F8D3C81B (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* __this, RuntimeObject* ___0_source, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF (Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m05472D4DD3029A7DD704095C3F0D22A52123AFEE (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_tF489B2B253E957377765FE439B765B21FD00697A* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_m630044D76C3678FABF3039C408414DBF09F888DA_inline (Func_2_tF489B2B253E957377765FE439B765B21FD00697A* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626 (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* __this, RuntimeObject* ___0_source, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m98A578B694496F75474ED794F19A2EE9AE369007 (Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE3F737784DFE75EBA3BE4B8361412E47C27F2D25 (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Func_2_Invoke_m9DF107DE50A7DAE57EF88ADC7A12CB87601075FE_inline (Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m2F54F0F081789787C26A96B06C7BE668C27D1F18 (WhereEnumerableIterator_1_tF06AE70CD84FEA860C208FEC06EAD32B08C899A0* __this, RuntimeObject* ___0_source, Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943 (Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4 (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* __this, RuntimeObject* ___0_source, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF (Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBE6E9D498755C8BEBE9029C04B84419AA1B85105 (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m275B0F1435986A6E7C5B02F3E0A626D021CE2979_inline (Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984 (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* __this, RuntimeObject* ___0_source, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD (Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5001400E4D987C4E2D033271C3308D3C029E33A0 (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m2DB2FE564D96E2AB370DD99BBE73E71E82813584_inline (Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* __this, RuntimeObject* ___0_source, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___1_predicate, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBEAA4B1591E30B8501780244180396B533CB2B14 (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m7C5D52D1A7031FA965122214AA3EC86A04626CB1_inline (Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEE39AB604B9E4A1CB0EBCCAB2425D479966AE8E5 (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* ___2_selector, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m3340B81F75358EF5AD42BFD3182D073B2DD085EF_inline (Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) ;
inline void WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___2_selector, const RuntimeMethod* method)
{
	((  void (*) (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C*, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A*, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169*, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4*, const RuntimeMethod*))WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C_gshared)(__this, ___0_source, ___1_predicate, ___2_selector, method);
}
inline Il2CppSharedGenericObject* Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_inline (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method)
{
	return ((  Il2CppSharedGenericObject* (*) (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*))Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_gshared_inline)(__this, ___0_arg, method);
}
inline void WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44*, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477 (Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450 (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_data, int32_t ___1_start, int32_t ___2_end, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___3_compare, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method)
{
	return ((  String_t* (*) (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194*, Il2CppSharedGenericObject*, const RuntimeMethod*))ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline)(__this, ___0_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
inline void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method)
{
	((  void (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194*, int32_t, const RuntimeMethod*))XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared)(__this, ___0_extractKey, ___1_capacity, method);
}
inline bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, Il2CppSharedGenericObject*, Il2CppSharedGenericObject**, const RuntimeMethod*))XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared)(__this, ___0_value, ___1_newValue, method);
}
inline int32_t XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40 (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method)
{
	return ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_fshared)(___0_key, ___1_index, ___2_count, method);
}
inline bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared)(__this, ___0_hashCode, ___1_key, ___2_index, ___3_count, ___4_entryIndex, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
inline bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method)
{
	return ((  bool (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, String_t*, int32_t, int32_t, Il2CppSharedGenericObject**, const RuntimeMethod*))XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared)(__this, ___0_key, ___1_index, ___2_count, ___3_value, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966 (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method)
{
	return ((  XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* (*) (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*, const RuntimeMethod*))XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644 (SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 XRResultStatus_get_unqualifiedSuccess_mF88DE6F5E8C28E2DF3A76A2D7B575E9CC01F8093 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04 (XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 ___0_result, const RuntimeMethod* method) ;
inline void SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9 (SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158* __this, const RuntimeMethod* method)
{
	((  void (*) (SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158*, const RuntimeMethod*))SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
inline void Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04 (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, const RuntimeMethod*))Dictionary_2__ctor_mE9A1CF09D5006AC41488691817533288065B42FF_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* ___0_dict, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32 (fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, int32_t ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___0_a, fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB (fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86 (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1 (fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m34E41EF283CEEC21BBBE40E5F2F5855354EFB35B_gshared (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_mF039450C7AD8D1BB5745072917622A6916C7D19D_gshared (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* L_2 = __this->___selector;
		WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* L_3 = (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m34E41EF283CEEC21BBBE40E5F2F5855354EFB35B(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mD7D187D0FAE98C5964415D983CFF4F3954514045_gshared (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_mC7591D3253947956E5574DC42E8B84FBF93404C6_inline(L_11, L_12, NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m732FDD0F10A7C2E04600972DDD3A8B82CD707540_gshared (WhereSelectListIterator_2_t2C5ED246037965B25771930DE7B46F3BF732F4EA* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, (RuntimeObject*)__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m2912FCFC4D310E20566993B2BD55CE4775FBB643_gshared (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_m0529B4AFDD0A542D1D29DD2FE74DC89DBDDD0355_gshared (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* L_2 = __this->___selector;
		WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* L_3 = (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m2912FCFC4D310E20566993B2BD55CE4775FBB643(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m74C7BB8F8BCDC64044B71EB912FD3509268D4C1D_gshared (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_mBA35EFC7B56DE1159A217041A0E34B248ABD65AD_inline(L_11, L_12, NULL);
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mA06C590A5AF37B81D02BEEB0FE9403F7EB6AECE3_gshared (WhereSelectListIterator_2_tC35957916C867205ADFD38DC0C6E635F95CC9F8F* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, (RuntimeObject*)__this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_m2E7761856CBD3CB0B74488A8297A4D03C6C5224C_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_2 = __this->___selector;
		WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* L_3 = (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mDD1F6B9427F21DDC9B7304C6445F4CE23F01B2F5(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m87B4188E471597108BBA231B780E29AB9D962A9B_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_inline(L_11, L_12, NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m09AB57C26990601C313EB1AD262947B08F85A06E_gshared (WhereSelectListIterator_2_t48B7058AB66C2C52050B162742ACAF16C6011285* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* ___0_source, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___1_predicate, Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m17BB20DE3CDE6477EE39177006103342C84EB316((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this, NULL);
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831* WhereSelectListIterator_2_Clone_mD3CE5F95862133EAE34D7195DB49D3327C70114C_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_0 = __this->___source;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_1 = __this->___predicate;
		Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* L_2 = __this->___selector;
		WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* L_3 = (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m88CB3C3AD4B0752E8DEA3F4447E5756CB4B62C25(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF14FE6A59925A92ECF7F03A9E4C040BF9C9E456C_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4225839FAF98FA4E886FF2A1469F9292D739E255* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6 L_4;
		L_4 = List_1_GetEnumerator_mEF61540761E14807B2930879741EF5E1E973FCE8(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_5 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		int32_t L_6;
		L_6 = Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_8 = __this->___predicate;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* L_11 = __this->___selector;
		int32_t L_12 = V_1;
		NullCheck(L_11);
		int32_t L_13;
		L_13 = Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_inline(L_11, L_12, NULL);
		((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* L_14 = (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m6054C979BCD753583C00269861523701392B935A(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tF3A22906B77B5DCD839078D7FE6447543476E831*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m8C1342FE3FD2CB804569ADE6CFE631B09BAAA4DB_gshared (WhereSelectListIterator_2_tEBC2ECE6C4BBBD114C89247B1FDECEEEE7D36797* __this, Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04* L_1 = (WhereEnumerableIterator_1_t4461C66E90B600BF7AF89D3F5D2C30E95D5A7C04*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mE7E4CC95FAFCA7DEDBC7CD26B2BEEDB7178002E9(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEA3D3B0F517F42E658D17D4B223865735C7B774F_gshared (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_mD20BD2FCE2D8E1715B54E746D94A9FC4D77F97ED((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026* WhereSelectListIterator_2_Clone_mD5EF39ED80C95A107722E31E03A06B25A314F9BC_gshared (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* L_2 = __this->___selector;
		WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* L_3 = (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mEA3D3B0F517F42E658D17D4B223865735C7B774F(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF806BE977DB51000407246480B543D1DE8DE1C0D_gshared (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A L_13;
		L_13 = Func_2_Invoke_mE87CCCF30117045DFD52777A0F83BB1A126A9C0A_inline(L_11, L_12, NULL);
		((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this)->___current))->___Item1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this)->___current))->___Item2), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_tD1AC9CFABA234A60BAC4CC65CB63974D4546B026*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m11D9598A3E4266FBB0189EEAAD0C5AFA3156B49E_gshared (WhereSelectListIterator_2_t68DE650D982D01768BE491EA3C078D7DD58BBC10* __this, Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t68AF76059E267E8E1F4A534F8E22B87067D025D9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875* L_1 = (WhereEnumerableIterator_1_tB81FA259BEAC5B48AD289214D303D650AC0EB875*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mF63228862E8BB95F351484D23AAECC612B67987A(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mF1B366622F25F80FCC3B4A235B88A3E1F8D3C81B (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m9CBF3685A44F015ED364E012FC67ACDC7935DD96(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5* WhereSelectListIterator_2_Clone_m0DD3998C6ECC350EAFF25B7F6F4AE9678E8499A9 (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_2 = __this->___selector;
		WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* L_3 = (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mF1B366622F25F80FCC3B4A235B88A3E1F8D3C81B(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mF66C2E34D7C5C50FD2931FA46113D26293B3FB61 (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		bool L_13;
		L_13 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_11, L_12, NULL);
		((Iterator_1_t71E6A09C6DA7B5665A7AE21BA593F9A1C4CBFEA5*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCBC9E09603CD064FD1E5B2D2C3BDBCAE1B0D44F6 (WhereSelectListIterator_2_t1CC31E4847357457397826D4649A16053BBB79D9* __this, Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t66AC14B29DD8B1DDD05693A14E55CF7707C762DB* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D* L_1 = (WhereEnumerableIterator_1_tC79E61165AF53521C305E751B0FFF9FDBE427D6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m2672E4EFA1C94475E8D626D4793081BAA021C25C(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m05472D4DD3029A7DD704095C3F0D22A52123AFEE (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_tF489B2B253E957377765FE439B765B21FD00697A* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_mEE24CA444F268E52B9F173A684E9A50C294ABBCF(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tF489B2B253E957377765FE439B765B21FD00697A* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE* WhereSelectListIterator_2_Clone_m0978A2D2BCB0C9F2743F0683689499325261C865 (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_tF489B2B253E957377765FE439B765B21FD00697A* L_2 = __this->___selector;
		WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* L_3 = (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m05472D4DD3029A7DD704095C3F0D22A52123AFEE(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m2F16E91343DB2842AB22CEC5844EEE12497CA3CA (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tF489B2B253E957377765FE439B765B21FD00697A* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		Guid_t L_13;
		L_13 = Func_2_Invoke_m630044D76C3678FABF3039C408414DBF09F888DA_inline(L_11, L_12, NULL);
		((Iterator_1_t698E9A52BE7A04F7989EF69884FF7EE820992FEE*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m20CE2A6A40F5ADF598E7576E8A32DAECA1DE00A5 (WhereSelectListIterator_2_tF9AD5A3E3495F6B9F73B0A8F7CD8D11367E5C8CE* __this, Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t751E090C9CCEDFE7DACDE13E290E3110D3EE28AA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D* L_1 = (WhereEnumerableIterator_1_tD9B3677A96A5B0AD1FA4479CEA26880403A92E6D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m9DD9CD3347A8DF85572E37D93DE7575DA4CF1626(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mE3F737784DFE75EBA3BE4B8361412E47C27F2D25 (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m98A578B694496F75474ED794F19A2EE9AE369007(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72* WhereSelectListIterator_2_Clone_mC73BE11545BFED81EBCDF0A8ABAA27AF2D8A126F (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* L_2 = __this->___selector;
		WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* L_3 = (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mE3F737784DFE75EBA3BE4B8361412E47C27F2D25(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m3A811EF84788AB38FE8C074016D90D95C205BE9D (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		intptr_t L_13;
		L_13 = Func_2_Invoke_m9DF107DE50A7DAE57EF88ADC7A12CB87601075FE_inline(L_11, L_12, NULL);
		((Iterator_1_t5FEBB63AF5181295793C27622C6BC425351FCD72*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m5626027BA6F36E2A003724DCCC07FED70266A0EB (WhereSelectListIterator_2_t6B20AE4DF7E852E514DE27A97E8FA55341840650* __this, Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t3B8F331AE9E408A115EF5FACE562FD826DC10EE8* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tF06AE70CD84FEA860C208FEC06EAD32B08C899A0* L_1 = (WhereEnumerableIterator_1_tF06AE70CD84FEA860C208FEC06EAD32B08C899A0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m2F54F0F081789787C26A96B06C7BE668C27D1F18(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m1B09BFBB8B83E605D7C7487F0E6A4986CE070943(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D* WhereSelectListIterator_2_Clone_m01258FBF3047EACEBBBE89855BDAE5197B095A79 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_2 = __this->___selector;
		WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* L_3 = (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mA16961886A67BC49FFE65D6057D3BA28D407DF89(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE119EF6FA88D7E63491FC5611A5F34D3602F5D1B (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 L_13;
		L_13 = Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline(L_11, L_12, NULL);
		((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringOriginalCase), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((Iterator_1_tE6B605B8CEAAA7680455D82B5BF52914D0C3892D*)__this)->___current))->___m_StringLowerCase), (void*)NULL);
		#endif
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mAEEE2C3DA2DBA62F84C02FE5EDD8894338DC5D55 (WhereSelectListIterator_2_t6C3621A89FA834F0251E7EF9F3484147BB4FD39E* __this, Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t3E602B1155E686D3D1F6672128944CD3D6D9B6FA* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C* L_1 = (WhereEnumerableIterator_1_t98114935A3AA4F0199B53A5027B776D5AFF9AF6C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m0C64291A42967A645028F01B6069873BFB0831E4(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBE6E9D498755C8BEBE9029C04B84419AA1B85105 (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m7FEBAE985CDE5DD1CB255EB4A3D65F05AA8D2AEF(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E* WhereSelectListIterator_2_Clone_mD273F09C5D8B6450E2C614C231C6599961E85C71 (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* L_2 = __this->___selector;
		WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* L_3 = (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mBE6E9D498755C8BEBE9029C04B84419AA1B85105(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m8E5AE8C4DA926942B94F9BBE396F0FE17BDFAD6E (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		float L_13;
		L_13 = Func_2_Invoke_m275B0F1435986A6E7C5B02F3E0A626D021CE2979_inline(L_11, L_12, NULL);
		((Iterator_1_t86D8BDE63EBFB97A0B7A8464AC2992725EE2281E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m47CC866F8438028CAB732DF4F4131303B88849A8 (WhereSelectListIterator_2_t70205F47C415DBE80ECD70866C1419384C93FF4F* __this, Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t49E998685259ADE759F9329BF66F20DE8667006E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C* L_1 = (WhereEnumerableIterator_1_t7BB2D1D9F8A6E52243A87F45DFEEA4209D685F7C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mCB49A03958EF827EF6CE47402259941EAB31D984(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m5001400E4D987C4E2D033271C3308D3C029E33A0 (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m78B15ADF003EB66E975D0F71571715AE0A2C63DD(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC* WhereSelectListIterator_2_Clone_m2680D54EAB4FBD913740F874CF860991979EFA40 (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* L_2 = __this->___selector;
		WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* L_3 = (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m5001400E4D987C4E2D033271C3308D3C029E33A0(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_m552FBDC643EACCA85D4968C49EDB7EA992CE09C4 (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Func_2_Invoke_m2DB2FE564D96E2AB370DD99BBE73E71E82813584_inline(L_11, L_12, NULL);
		((Iterator_1_t286A5984AB0A75DF6F4FC3930A2916F5121B8CDC*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mCD8EBD2AF5C11E223D325C20A932233A0DB9D23D (WhereSelectListIterator_2_t2899862DBA0B7521DC6D5486C18EA256C4A17212* __this, Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t8B45F86AD27A9D8326FA522C45CA74669CD4CDF9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75* L_1 = (WhereEnumerableIterator_1_tDEC92F40E12E823CE91376592982B11882F62C75*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m9C077DCBB6483C517E8B74C1F61F52D38B51AE0A(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mBEAA4B1591E30B8501780244180396B533CB2B14 (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m9AB693A13851FE3B1406E22D6321B2CABDC41EDF(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E* WhereSelectListIterator_2_Clone_m676157462E398C962A32C95B7B6F9FE8DFCBB3D1 (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* L_2 = __this->___selector;
		WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* L_3 = (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mBEAA4B1591E30B8501780244180396B533CB2B14(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mBF4DF3B8A67DEEEE732C99135E41AB7F6D7DD916 (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Func_2_Invoke_m7C5D52D1A7031FA965122214AA3EC86A04626CB1_inline(L_11, L_12, NULL);
		((Iterator_1_t8605CB36C9ABA644008D4686FEF6839E9B56FB6E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_mED4211DB4B58D7F475B1E88E31D0EA30EDE679C8 (WhereSelectListIterator_2_tCFD8A5447B30E20360E3E9D1D9AC041E0DACE0FE* __this, Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t69265D7FBC2C3636F8EC4F844AE44F2CA605B56E* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E* L_1 = (WhereEnumerableIterator_1_t1177CABA2EF83006A1BE480BE243A927AB4BC42E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_mAE1B02AD184C82E0DB80A41E3D138F913EE96023(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_mEE39AB604B9E4A1CB0EBCCAB2425D479966AE8E5 (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_mD304F241822DC4577D5D22D1EC9E014EAFA6FB4D(__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E* WhereSelectListIterator_2_Clone_m85F857074D1887BCC88B8EF4E9B0B683E3143EBD (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* L_2 = __this->___selector;
		WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* L_3 = (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_mEE39AB604B9E4A1CB0EBCCAB2425D479966AE8E5(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE268B41B17E4FCE4564999C788C36F9C903CE517 (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Func_2_Invoke_m3340B81F75358EF5AD42BFD3182D073B2DD085EF_inline(L_11, L_12, NULL);
		((Iterator_1_t336734ECDA49CADE59B5C4592466F45D9B9DC43E*)__this)->___current = L_13;
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		VirtualActionInvoker0::Invoke(12, __this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m9EB07A36C06BA291A79429C6BF3E45558CD310AE (WhereSelectListIterator_2_t041C25DD9E093196A2FF55D595F07AA9B4844E03* __this, Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t6F0E9D3F3FD9400677A87178B87ABAE9E0497DA9* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9* L_1 = (WhereEnumerableIterator_1_tAC8B60D41773D33630A3A2B09BAAD1B4071F2AA9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m2F392FBA90284C5A1B0905EEF1970EA2EDF264CB(L_1, __this, L_0, NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 74972
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* ___0_source, Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* ___1_predicate, Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* ___2_selector, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Iterator_1__ctor_m5DFE58EF25FE086001D22A22DB4AD981515DD4CD((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this, NULL);
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = ___0_source;
		__this->___source = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source), (void*)L_0);
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = ___1_predicate;
		__this->___predicate = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___predicate), (void*)L_1);
		Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* L_2 = ___2_selector;
		__this->___selector = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selector), (void*)L_2);
		return;
	}
}
// Method Definition Index: 74973
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32* WhereSelectListIterator_2_Clone_mD5CAE504F9C99D269DDBE8024BBB3A720B57903E_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_0 = __this->___source;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_1 = __this->___predicate;
		Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* L_2 = __this->___selector;
		WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* L_3 = (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
		WhereSelectListIterator_2__ctor_m366B0E85B127808BA5964E491DFF0091C853529C(L_3, L_0, L_1, L_2, NULL);
		return (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)L_3;
	}
}
// Method Definition Index: 74974
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WhereSelectListIterator_2_MoveNext_mE11050266689AB3FED99AFC03D14D35FB57B0835_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	JsonValue_t01DB320267C848E729A400EF2345979978F851D2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		int32_t L_0 = ((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)2)))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0074;
	}

IL_0011:
	{
		List_1_t4A80BCCFB0BC8742C8BB601365DB07226750573A* L_3 = __this->___source;
		NullCheck(L_3);
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB L_4;
		L_4 = List_1_GetEnumerator_mE2A3E04FB3B522B90EBAC4EFFF9614F47FE19D13(L_3, NULL);
		__this->___enumerator = L_4;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___enumerator))->____list), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&((&(((&__this->___enumerator))->____current))->___stringValue))->___text))->___m_String), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___arrayValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___objectValue), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&__this->___enumerator))->____current))->___anyValue), (void*)NULL);
		#endif
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___state = 2;
		goto IL_0061;
	}

IL_002b:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_5 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_6;
		L_6 = Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline(L_5, NULL);
		V_1 = L_6;
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_7 = __this->___predicate;
		if (!L_7)
		{
			goto IL_004d;
		}
	}
	{
		Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* L_8 = __this->___predicate;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_9 = V_1;
		NullCheck(L_8);
		bool L_10;
		L_10 = Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0061;
		}
	}

IL_004d:
	{
		Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* L_11 = __this->___selector;
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_12 = V_1;
		NullCheck(L_11);
		Il2CppSharedGenericObject* L_13;
		L_13 = Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_inline(L_11, L_12, NULL);
		((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this)->___current), (void*)L_13);
		return (bool)1;
	}

IL_0061:
	{
		Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* L_14 = (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB*)(&__this->___enumerator);
		bool L_15;
		L_15 = Enumerator_MoveNext_m698365CC16BD65E80A0737FD26ED23F19C8AE5DF(L_14, NULL);
		if (L_15)
		{
			goto IL_002b;
		}
	}
	{
		NullCheck((Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
		VirtualActionInvoker0::Invoke(12, (Iterator_1_t097FE23281C8F47A8C5B6EA3CECBD0986B7E6B32*)__this);
	}

IL_0074:
	{
		return (bool)0;
	}
}
// Method Definition Index: 74976
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhereSelectListIterator_2_Where_m18B457233CE2D525123CCAE02C5ACF2CDC0ABD46_gshared (WhereSelectListIterator_2_t8D92221CC05EE04607C9E639B24E550475B4B32C* __this, Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* ___0_predicate, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Func_2_t9411B5EEDC5B4099FE9226A3C6B92CA846F8991D* L_0 = ___0_predicate;
		WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2* L_1 = (WhereEnumerableIterator_1_t1018A44926137B37FCCA9BE3C6BF3477F22144F2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 18));
		WhereEnumerableIterator_1__ctor_m8DC2E0C9C8437B73783D2D9F6E2DDF2CE0F37377(L_1, (RuntimeObject*)__this, L_0, NULL);
		return (RuntimeObject*)L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 52894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m8B26C5F2B3AB3C05CB4ACDE5A17C6559BDEF503C (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mF7CEAE61925236C3A0BE9E92E9B97B65EF5DFFEF(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 52895
// Method Definition Index: 52896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 WorkSlice_1_get_Item_m31D876CE45C89B17D24E2D2EB6534C4150D72EE5 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 52897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m242025FA56F79603361582298B70AB2284A12067 (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, int32_t ___0_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3)L_3);
		return;
	}
}
// Method Definition Index: 52898
// Method Definition Index: 52899
// Method Definition Index: 52900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m9DF994BABD5BF00DE8FEB14D82F7A0A9F6CAEE3D (WorkSlice_1_tDC724EEF28BD2F2E2B6498F1FDB285F8CCF34A44* __this, Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tD46831209E6E19204CD8F9EAFC74DBFCA3C36C5F* L_5 = ___0_compare;
		CHECKED_LOCAL_INIT(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit,(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Sorting_QuickSort_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8556CFA6B9237741AAA1ADF2EE68AA3696F9477(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 52894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mFEB81358558CEF0264CCE077535DB880EA2492BA_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		((  void (*) (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0)))(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 52895
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m7AC3CC7AABC83B76D23D2B94329DD4D0200156FA_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit);
	//<source_info:<no-source>:1>
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B2_0 = NULL;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* G_B3_1 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ___0_src;
		__this->___m_Data = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data), (void*)L_0);
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start = L_1;
		int32_t L_2 = ___2_srcLen;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
		G_B1_0 = __this;
	}
	{
		int32_t L_3 = ___2_srcLen;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = ___0_src;
		NullCheck(L_4);
		int32_t L_5 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_4)->max_length),NULL));
		CHECKED_LOCAL_INIT(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_StaticInit,(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, L_5, NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7 = ___0_src;
		NullCheck(L_7);
		int32_t L_8 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_7)->max_length),NULL));
		G_B3_0 = L_8;
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length = G_B3_0;
		return;
	}
}
// Method Definition Index: 52896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_get_Item_mFDEC427E08156ECD6879AD45AEE3618B43E3F726_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_4 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		il2cpp_codegen_memcpy(L_4, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		return;
	}
}
// Method Definition Index: 52897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m757F8BE76FAE27C149DE7C474A2B1845E08A5A0F_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, int32_t ___0_index, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1)) ? ___1_value : &___1_value), SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		NullCheck(L_0);
		il2cpp_codegen_memcpy((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), L_3, SizeOf_T_tA71336896536EBCB168400E4D351FEE422324E7A);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (void**)(L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2)))), (void*)L_3);
		return;
	}
}
// Method Definition Index: 52898
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m7212817506EACBA1AB0D914DE401C6FA05F0DD9D_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		return L_0;
	}
}
// Method Definition Index: 52899
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_mCF0D603B7EC6E6037D0E1A14D8D0F49AD063E59E_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = __this->___m_Data;
		NullCheck(L_0);
		int32_t L_1 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_0)->max_length),NULL));
		return L_1;
	}
}
// Method Definition Index: 52900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_mE2ED392BDF8F4F4141D7BF4C984EFE943F607A94_fshared (WorkSlice_1_t95249C8534D20AFEA3985723537EDE6E5BF06809* __this, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9* L_5 = ___0_compare;
		CHECKED_LOCAL_INIT(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit,(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, Func_3_tECED1961B53AB164A131061296ABA1276B4FBBB9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 52894
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, NULL);
		return;
	}
}
// Method Definition Index: 52895
// Method Definition Index: 52896
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
// Method Definition Index: 52897
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = __this->___m_Data;
		int32_t L_1 = __this->___m_Start;
		int32_t L_2 = ___0_index;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
// Method Definition Index: 52898
// Method Definition Index: 52899
// Method Definition Index: 52900
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit);
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->___m_Length;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = __this->___m_Data;
		int32_t L_2 = __this->___m_Start;
		int32_t L_3 = __this->___m_Start;
		int32_t L_4 = __this->___m_Length;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___0_compare;
		CHECKED_LOCAL_INIT(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_StaticInit,(Sorting_tBB4ACAADCAA21EA710DD3998A0614ABDEF8FD8A6_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Sorting_QuickSort_TisLightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_mD7019ED48D20810C1169430283118F96945E9450(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
	}

IL_002a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99506
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_3 = (EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9*)(EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 99507
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppSharedGenericObject* V_6 = NULL;
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = il2cpp_intrinsic_interlocked_compare_exchange(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), (-1), 0);
		V_3 = L_10;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_11 = __this->____extractKey;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_12 = __this->____entries;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		Il2CppSharedGenericObject* L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___Value;
		NullCheck(L_11);
		String_t* L_15;
		L_15 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_11, L_14, NULL);
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_17 = __this->____entries;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = ((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18)))->___Next;
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_20 = __this->____entries;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t* L_22 = (int32_t*)(&((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Next);
		int32_t L_23;
		L_23 = il2cpp_intrinsic_interlocked_compare_exchange(L_22, (-1), 0);
		V_3 = L_23;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_24 = __this->____entries;
		int32_t L_25 = V_3;
		NullCheck(L_24);
		int32_t L_26 = ((L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_25)))->___Next;
		V_3 = L_26;
	}

IL_009f:
	{
		int32_t L_27 = V_3;
		if ((((int32_t)L_27) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_28 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_00a7:
	{
		int32_t L_29 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		NullCheck(L_30);
		int32_t L_31 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_30)->max_length),NULL));
		if ((((int32_t)L_29) < ((int32_t)L_31)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_32 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = __this->____buckets;
		NullCheck(L_33);
		int32_t L_34 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_33)->max_length),NULL));
		if ((((int32_t)L_32) >= ((int32_t)((int32_t)(L_34/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_35 = __this->____buckets;
		NullCheck(L_35);
		int32_t L_36 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_35)->max_length),NULL));
		V_0 = L_36;
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_37 = __this->____buckets;
		NullCheck(L_37);
		int32_t L_38 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_37)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_38, 2));
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_40 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_40, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_40, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_41 = __this->____extractKey;
		int32_t L_42 = V_0;
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_43 = (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
		XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0(L_43, L_41, L_42, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		V_1 = L_43;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_44 = __this->____buckets;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		int32_t L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		V_5 = L_47;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_48 = V_1;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_49 = __this->____entries;
		int32_t L_50 = V_5;
		NullCheck(L_49);
		Il2CppSharedGenericObject* L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___Value;
		NullCheck(L_48);
		bool L_52;
		L_52 = XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA(L_48, L_51, (&V_6), NULL);
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_53 = __this->____entries;
		int32_t L_54 = V_5;
		NullCheck(L_53);
		int32_t L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___Next;
		V_5 = L_55;
	}

IL_0130:
	{
		int32_t L_56 = V_5;
		if ((((int32_t)L_56) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_57 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_013b:
	{
		int32_t L_58 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_59 = __this->____buckets;
		NullCheck(L_59);
		int32_t L_60 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_59)->max_length),NULL));
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_61 = V_1;
		return L_61;
	}
}
// Method Definition Index: 99508
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350(__this, L_4, L_5, L_6, L_7, (&V_1), NULL);
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppSharedGenericObject** L_9 = ___3_value;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		Il2CppSharedGenericObject* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value;
		*(Il2CppSharedGenericObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppSharedGenericObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(Il2CppSharedGenericObject*));
		return (bool)0;
	}
}
// Method Definition Index: 99509
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, Il2CppSharedGenericObject* ___0_value, Il2CppSharedGenericObject** ___1_newValue, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppSharedGenericObject** L_0 = ___1_newValue;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		*(Il2CppSharedGenericObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_2 = __this->____extractKey;
		Il2CppSharedGenericObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_2, L_3, NULL);
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = XHashtableState_ComputeHashCode_m062A32ABBF2B6ECE81D77BC64BA57E5665573F40(L_6, 0, L_8, NULL);
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_16 = __this->____entries;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		Il2CppSharedGenericObject* L_18 = ___0_value;
		((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Value = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Value), (void*)L_18);
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_19 = __this->____entries;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = V_3;
		((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___HashCode = L_21;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____buckets;
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____buckets;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		NullCheck(L_23);
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = il2cpp_intrinsic_interlocked_compare_exchange(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)il2cpp_codegen_subtract(L_26, 1))))))), L_27, 0);
		V_1 = L_28;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_29 = __this->____entries;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t* L_31 = (int32_t*)(&((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30)))->___Next);
		int32_t L_32 = V_0;
		int32_t L_33;
		L_33 = il2cpp_intrinsic_interlocked_compare_exchange(L_31, L_32, 0);
		V_1 = L_33;
	}

IL_00ae:
	{
		int32_t L_34 = V_1;
		if ((((int32_t)L_34) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_35 = V_1;
		return (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_36 = V_3;
		String_t* L_37 = V_2;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		bool L_40;
		L_40 = XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350(__this, L_36, L_37, 0, L_39, (&V_1), NULL);
		if (!L_40)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppSharedGenericObject** L_41 = ___1_newValue;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_42 = __this->____entries;
		int32_t L_43 = V_1;
		NullCheck(L_42);
		Il2CppSharedGenericObject* L_44 = ((L_42)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_43)))->___Value;
		*(Il2CppSharedGenericObject**)L_41 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(Il2CppSharedGenericObject**)L_41, (void*)L_44);
		return (bool)1;
	}
}
// Method Definition Index: 99510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_mE66F0F121AE346B5526E58051CA0DFB614900350_gshared (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___HashCode;
		int32_t L_13 = ___0_hashCode;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_14 = __this->____extractKey;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_15 = __this->____entries;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppSharedGenericObject* L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value;
		NullCheck(L_14);
		String_t* L_18;
		L_18 = ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_inline(L_14, L_17, NULL);
		V_2 = L_18;
		String_t* L_19 = V_2;
		if (L_19)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_20 = __this->____entries;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___Next;
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_23 = __this->____entries;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppSharedGenericObject** L_25 = (Il2CppSharedGenericObject**)(&((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Value);
		il2cpp_codegen_initobj(L_25, sizeof(Il2CppSharedGenericObject*));
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_26 = __this->____entries;
		int32_t L_27 = V_1;
		NullCheck(L_26);
		int32_t L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___Next;
		V_1 = L_28;
		int32_t L_29 = V_0;
		if (L_29)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_30 = __this->____buckets;
		int32_t L_31 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		int32_t L_34 = V_1;
		NullCheck(L_30);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_31&((int32_t)il2cpp_codegen_subtract(L_33, 1))))), (int32_t)L_34);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_35 = __this->____entries;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		int32_t L_37 = V_1;
		((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___Next = L_37;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_38 = ___3_count;
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40;
		L_40 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_39, NULL);
		if ((!(((uint32_t)L_38) == ((uint32_t)L_40))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_41 = ___1_key;
		int32_t L_42 = ___2_index;
		String_t* L_43 = V_2;
		int32_t L_44 = ___3_count;
		int32_t L_45;
		L_45 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_41, L_42, L_43, 0, L_44, NULL);
		if (L_45)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_46 = ___4_entryIndex;
		int32_t L_47 = V_1;
		*(L_46) = L_47;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_48 = V_1;
		V_0 = L_48;
		EntryU5BU5D_t4E01CFF0A050D53B89870F5FE1753AAD246EA9A9* L_49 = __this->____entries;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_50)))->___Next;
		V_1 = L_51;
	}

IL_00f9:
	{
		int32_t L_52 = V_1;
		if ((((int32_t)L_52) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_53 = ___4_entryIndex;
		int32_t L_54 = V_0;
		*(L_53) = L_54;
		return (bool)0;
	}
}
// Method Definition Index: 99511
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99506
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_mC2ED3CAB78829509332331B146E7165C58D3DD0F_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_3 = (EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)(EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4*)SZArrayNew(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0), (uint32_t)L_2);
		__this->____entries = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries), (void*)L_3);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_4 = ___0_extractKey;
		__this->____extractKey = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey), (void*)L_4);
		return;
	}
}
// Method Definition Index: 99507
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* XHashtableState_Resize_m3CD152F50AD9E53B808C9B1CEC069D894A621202_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_50 = L_14;
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	memset(V_6, 0, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	{
		int32_t L_0 = __this->____numEntries;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = __this->____buckets;
		NullCheck(L_1);
		int32_t L_2 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_1)->max_length),NULL));
		if ((((int32_t)L_0) >= ((int32_t)L_2)))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		V_3 = L_6;
		int32_t L_7 = V_3;
		if (L_7)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->____buckets;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = il2cpp_intrinsic_interlocked_compare_exchange(((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), (-1), 0);
		V_3 = L_10;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_11 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_12 = __this->____entries;
		int32_t L_13 = V_3;
		NullCheck(L_12);
		il2cpp_codegen_memcpy(L_14, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_11);
		String_t* L_15;
		L_15 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_11, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_14: *(void**)L_14));
		if (!L_15)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_17 = __this->____entries;
		int32_t L_18 = V_3;
		NullCheck(L_17);
		int32_t L_19 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		if (L_19)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_20 = __this->____entries;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		int32_t L_22;
		L_22 = il2cpp_intrinsic_interlocked_compare_exchange((((int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), (-1), 0);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_23 = __this->____entries;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		NullCheck(L_29);
		int32_t L_30 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_29)->max_length),NULL));
		if ((((int32_t)L_28) < ((int32_t)L_30)))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_31 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = __this->____buckets;
		NullCheck(L_32);
		int32_t L_33 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_32)->max_length),NULL));
		if ((((int32_t)L_31) >= ((int32_t)((int32_t)(L_33/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_34 = __this->____buckets;
		NullCheck(L_34);
		int32_t L_35 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_34)->max_length),NULL));
		V_0 = L_35;
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_36 = __this->____buckets;
		NullCheck(L_36);
		int32_t L_37 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_36)->max_length),NULL));
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_37, 2));
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_39 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_39, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_39, method);
	}

IL_00e2:
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_40 = __this->____extractKey;
		int32_t L_41 = V_0;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_42 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 6));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7)))(L_42, L_40, L_41, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 7));
		V_1 = L_42;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_43 = __this->____buckets;
		int32_t L_44 = V_4;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		int32_t L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		V_5 = L_46;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_47 = V_1;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_48 = __this->____entries;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		il2cpp_codegen_memcpy(L_50, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_47);
		bool L_51;
		L_51 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 8), L_47, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_50: *(void**)L_50), (Il2CppFullySharedGenericAny*)V_6);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_52 = __this->____entries;
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_53))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_5 = L_54;
	}

IL_0130:
	{
		int32_t L_55 = V_5;
		if ((((int32_t)L_55) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_56 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_013b:
	{
		int32_t L_57 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->____buckets;
		NullCheck(L_58);
		int32_t L_59 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_58)->max_length),NULL));
		if ((((int32_t)L_57) < ((int32_t)L_59)))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_60 = V_1;
		return L_60;
	}
}
// Method Definition Index: 99508
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m94EE8AEAE527C34D9D2B86D03E1D04FF867266F3_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_0, L_1, L_2, NULL);
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_9 = ___3_value;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		il2cpp_codegen_memcpy(L_12, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_9, L_12, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		Il2CppFullySharedGenericAny* L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		return (bool)0;
	}
}
// Method Definition Index: 99509
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m25BEF4B433B3B23CE79C25AA27DA2FFB624CCAE2_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* ___1_newValue, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	const Il2CppFullySharedGenericAny L_18 = L_1;
	const Il2CppFullySharedGenericAny L_43 = L_1;
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		Il2CppFullySharedGenericAny* L_0 = ___1_newValue;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_2 = __this->____extractKey;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_2);
		String_t* L_4;
		L_4 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_3: *(void**)L_3));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 9)))(L_6, 0, L_8, NULL);
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = __this->____buckets;
		NullCheck(L_14);
		int32_t L_15 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_14)->max_length),NULL));
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_16 = __this->____entries;
		int32_t L_17 = V_0;
		NullCheck(L_16);
		il2cpp_codegen_memcpy(L_18, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? ___0_value : &___0_value), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_write_field_data<true>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),0), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3), L_18, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_19 = __this->____entries;
		int32_t L_20 = V_0;
		NullCheck(L_19);
		int32_t L_21 = V_3;
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),1), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11), L_21);
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_22 = V_1;
		if (L_22)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_23 = __this->____buckets;
		int32_t L_24 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_25 = __this->____buckets;
		NullCheck(L_25);
		int32_t L_26 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_25)->max_length),NULL));
		NullCheck(L_23);
		int32_t L_27 = V_0;
		int32_t L_28;
		L_28 = il2cpp_intrinsic_interlocked_compare_exchange(((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_24&((int32_t)il2cpp_codegen_subtract(L_26, 1))))))), L_27, 0);
		V_1 = L_28;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_29 = __this->____entries;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		int32_t L_31 = V_0;
		int32_t L_32;
		L_32 = il2cpp_intrinsic_interlocked_compare_exchange((((int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_30))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5)))), L_31, 0);
		V_1 = L_32;
	}

IL_00ae:
	{
		int32_t L_33 = V_1;
		if ((((int32_t)L_33) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_34 = V_1;
		return (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_35 = V_3;
		String_t* L_36 = V_2;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		bool L_39;
		L_39 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10)))(__this, L_35, L_36, 0, L_38, (&V_1), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 10));
		if (!L_39)
		{
			goto IL_0071;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_40 = ___1_newValue;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_41 = __this->____entries;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		il2cpp_codegen_memcpy(L_43, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_40, L_43, SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2), (void**)(Il2CppFullySharedGenericAny*)L_40, (void*)L_43);
		return (bool)1;
	}
}
// Method Definition Index: 99510
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m480C6B27D99709A7E6CB50C907ACDEA057992BCD_fshared (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2));
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *(L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->____buckets;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = __this->____buckets;
		NullCheck(L_5);
		int32_t L_6 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_5)->max_length),NULL));
		NullCheck(L_3);
		int32_t L_7 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(L_6, 1))));
		int32_t L_8 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_9 = V_0;
		V_1 = L_9;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_10 = __this->____entries;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		int32_t L_12 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 11));
		int32_t L_13 = ___0_hashCode;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_14 = __this->____extractKey;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_15 = __this->____entries;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		il2cpp_codegen_memcpy(L_17, il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		NullCheck(L_14);
		String_t* L_18;
		L_18 = InvokerFuncInvoker1< String_t*, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_14, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 2)) ? L_17: *(void**)L_17));
		V_2 = L_18;
		String_t* L_19 = V_2;
		if (L_19)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_20 = __this->____entries;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		int32_t L_22 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		if ((((int32_t)L_22) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_23 = __this->____entries;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		il2cpp_codegen_initobj((((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 3)))), SizeOf_TValue_tE0E843520D1B6FE8622D14458F0B584A2B7BCD70);
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_25 = __this->____entries;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->____buckets;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->____buckets;
		NullCheck(L_31);
		int32_t L_32 = (il2cpp_codegen_conv<int32_t,int64_t,int64_t,false,false>((((RuntimeArray*)L_31)->max_length),NULL));
		int32_t L_33 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(L_32, 1))))), (int32_t)L_33);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_34 = __this->____entries;
		int32_t L_35 = V_0;
		NullCheck(L_34);
		int32_t L_36 = V_1;
		il2cpp_codegen_write_field_data<int32_t, false>(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35))), il2cpp_rgctx_field(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1),2), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5), L_36);
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_37 = ___3_count;
		String_t* L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_38, NULL);
		if ((!(((uint32_t)L_37) == ((uint32_t)L_39))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_40 = ___1_key;
		int32_t L_41 = ___2_index;
		String_t* L_42 = V_2;
		int32_t L_43 = ___3_count;
		int32_t L_44;
		L_44 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_40, L_41, L_42, 0, L_43, NULL);
		if (L_44)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_45 = ___4_entryIndex;
		int32_t L_46 = V_1;
		*(L_45) = L_46;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_47 = V_1;
		V_0 = L_47;
		EntryU5BU5D_tD3CC9C2488DC949FC30141F89404B8BDA9DB6CE4* L_48 = __this->____entries;
		int32_t L_49 = V_1;
		NullCheck(L_48);
		int32_t L_50 = *(int32_t*)il2cpp_codegen_get_field_data_pointer(((Entry_t7F8922DC9D131FDA94BF956DD509FC395285A91E*)(L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49))), il2cpp_rgctx_offset(il2cpp_codegen_method_rgctx(method), 5));
		V_1 = L_50;
	}

IL_00f9:
	{
		int32_t L_51 = V_1;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_52 = ___4_entryIndex;
		int32_t L_53 = V_0;
		*(L_52) = L_53;
		return (bool)0;
	}
}
// Method Definition Index: 99511
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_m52BA0BD18441AD2A49C4E822AB76A7A5B7DC4B6D_fshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m3D1E3EE0309A2609621BEADA5C0A6B8E848411F7_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_2 = (XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		XHashtableState__ctor_mD1117E487A1EF0829021BDF5A043F04A468029B0(L_2, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2EA323EB26019A10072366BE80F4B4C6DB10AD0B_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppSharedGenericObject** ___3_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppSharedGenericObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = XHashtableState_TryGetValue_m0B4E6CD76588AC482DE9AE022C205AABBE02FA00(L_0, L_1, L_2, L_3, L_4, NULL);
		return L_5;
	}
}
// Method Definition Index: 99503
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* XHashtable_1_Add_m44F5FEBEB616A2641A3BE7655190A82DA593563A_gshared (XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	Il2CppSharedGenericObject* V_0 = NULL;
	XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_0 = __this->____state;
		Il2CppSharedGenericObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = XHashtableState_TryAdd_m93E23AC390F325DA26BFD8AB915B169CBD72B9AA(L_0, L_1, (&V_0), NULL);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		Il2CppSharedGenericObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_tBACBC427568589A434B4A19DDC39AA8FEF62DEBD* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_8;
			L_8 = XHashtableState_Resize_mC8E60D1335F507F7484A48615D0C57424132F966(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t7DFE0C170DD789211F07C89BFC85AB0A63879402* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 99501
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m76AD29BB3D4A65A3071FDFCC0AD7F927FC6051B7_fshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_2 = (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 0));
		((  void (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, ExtractKeyDelegate_t0FCB0690B76E40F52DC9D05708A8FC488624E3CD*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 1));
		__this->____state = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_2);
		return;
	}
}
// Method Definition Index: 99502
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_m2AE37A0F57ADCA202E17A64CCAF4D0F37A070A24_fshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, Il2CppFullySharedGenericAny* ___3_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		Il2CppFullySharedGenericAny* L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, String_t*, int32_t, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 2));
		return L_5;
	}
}
// Method Definition Index: 99503
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1_Add_mB4B8BF6CA81EE97D92FEE9D365A8FFB15168AE00_fshared (XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* __this, Il2CppFullySharedGenericAny ___0_value, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	const Il2CppFullySharedGenericAny L_3 = L_1;
	//<source_info:<no-source>:1>
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	memset(V_0, 0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
	XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* V_3 = NULL;

IL_0000:
	{
		XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_0 = __this->____state;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? ___0_value : &___0_value), SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		NullCheck(L_0);
		bool L_2;
		L_2 = InvokerFuncInvoker2< bool, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4)), il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 4), L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 3)) ? L_1: *(void**)L_1), (Il2CppFullySharedGenericAny*)V_0);
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		il2cpp_codegen_memcpy(L_3, V_0, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_TValue_t3953344BBD5AABD452C9834A9E3F75B5A767B1A7);
		return;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			XHashtable_1_t781B821CC6AC13BED190536310819EB7FD1463D0* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_7 = __this->____state;
			NullCheck(L_7);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_8;
			L_8 = ((  XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* (*) (XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5)))(L_7, il2cpp_rgctx_method(il2cpp_codegen_method_rgctx(method), 5));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_t34177FC58180B0A7A606129FC1FA6AF4C373043D* L_9 = V_3;
			__this->____state = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state), (void*)L_9);
			goto IL_0000;
		}
		catch(Il2CppNativeThreadAbortException&)
		{
			__finallyBlock.SetNativeThreadAbortOccurred();
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 87845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRSubsystem_3_GetPermissionState_mABA1B0A7D8841E2B639E430B5BD92BF8823E2B36_gshared (XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		return (int32_t)(0);
	}
}
// Method Definition Index: 87846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* XRSubsystem_3_TryStartAsync_m3FF6EDA1E8E2B8526D4EA00AA96DB4EE1850E443_gshared (XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_token, int32_t ___1_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_StaticInit);
	//<source_info:<no-source>:1>
	{
		NullCheck((SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242*)__this);
		SubsystemWithProvider_Start_m720DC3EDB918F58D65CA4B12017D395788934644((SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242*)__this, NULL);
		XRResultStatus_tCC9883C2EC8AE64CE75A3B0BD56DEFB134CEC941 L_0;
		L_0 = XRResultStatus_get_unqualifiedSuccess_mF88DE6F5E8C28E2DF3A76A2D7B575E9CC01F8093(NULL);
		CHECKED_LOCAL_INIT(AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_StaticInit,(AwaitableUtils_1_tAEDCF2849C0E4FEFE9B2113F76DF1C21FBF60323_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Awaitable_1_t9A35C3CFA6CF88CE75E68EB053253B574AF23EB7* L_1;
		L_1 = AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04(L_0, AwaitableUtils_1_FromResult_m902BED9C21A1BB206C3A04DFCA7B5BCC1D645C04_RuntimeMethod_var);
		return L_1;
	}
}
// Method Definition Index: 87847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRSubsystem_3__ctor_mF006E6745B514555338C06CA890EC167D118ED8A_gshared (XRSubsystem_3_t68FC818A8054236AC9E931964F2FBE6557E59C44* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		SubsystemWithProvider_3__ctor_mFE19BBBDA21A0F851E05CF163A92B3A5CF341BF9((SubsystemWithProvider_3_tDDCFC3734A3F5FC59E253F00C18C173C1B147158*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m66614734A851F69863F28F36CAE8C109DFE633A0 (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mD7FB6CCCB39160CC4D1837430E55165CA2686FE6 (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m9DC7A75C5043D26A8B0F27C1EBF6414DB1F38947 (fsDirectConverter_1_tC2007A06B444810E5B41544B7B0FCE29128FBC50* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32(__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)UnBox(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_16 = V_1;
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_17);
		*(L_15) = L_18;
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3B1D5B68B9A2AB907D286BB041E68825E23D338B (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m228B3D61FB850893564D237F0F16E30BBD9B6B04 (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mDDCD92619631E9ED6DE40EDE7B2E4E0A586513DA (fsDirectConverter_1_t7705783FE5B6390E39DFB3F2457CD37A4912B76C* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32(__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((*(Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0*)UnBox(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0* >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_16 = V_1;
		Keyframe_tB9C67DCBFE10C0AE9C52CB5C66E944255C9254F0 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_17);
		*(L_15) = L_18;
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m9F76A8BA82C3043DFB71DA4C07A250F84CDB0184 (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m641FFE348BDF3531BF6BDBDD22704DE53ED14F4A (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mFFB6258A349189C4019C5E3C202AAFC7230C1BF9 (fsDirectConverter_1_t4AB706B5DC3FF2BB1AEAD2A78015FD3548436108* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32(__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((*(LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB*)UnBox(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB* >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_16 = V_1;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_17);
		*(L_15) = L_18;
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_mC32E7553583DD793467D6FB5CE24747854A070E4 (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m8B301BF0E4624082448AC261F66E55A9069C9F2B (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mB57F1FED13B2F213B3A9C45337315BC8E5E3F6A6 (fsDirectConverter_1_tF307DFA6F21486A34320546F09381BBF84FF0539* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32(__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((*(Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00*)UnBox(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_16 = V_1;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_17);
		*(L_15) = L_18;
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m58E406781ACEFCFD3F1526A502D26109CE14F8DF (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mBF17673DDC9A3AF571B07DA5640AA0BFE06B3FB4 (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m6DC3716E17198067B467187A41C5F378F9C2753F (fsDirectConverter_1_t8EC81BCA98876AF5AF3271B6086EC66E2CCDC388* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32(__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((*(Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A*)UnBox(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A* >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_16 = V_1;
		Ray2D_t48EB7C703F8A2363D8A8F4A05D58640BD5721C7A L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_17);
		*(L_15) = L_18;
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m3FD4D633636A5AF98D07BE76673F55CC9262FB13 (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mA6F80C2C119177F6A02BE2DCE8B17803F98E0A2A (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m055ADA15BC7796EDA3848DBC9F9B51BB2562A886 (fsDirectConverter_1_t8DF7EDE51D153578D3AC20C59C648308A99EA12A* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32(__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((*(Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D*)UnBox(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_16 = V_1;
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), &L_17);
		*(L_15) = L_18;
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)L_18);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_19 = V_0;
		return L_19;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m1958CEB26AB0ACEC6E3FCA7AA8AFEF7B69E9763E_gshared (fsDirectConverter_1_t9ADDD5AED0C9FF81B738068C90D344C66801CB57* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_m0C11541DFB6C97E3FAED3609FB11D0824B19A216_gshared (fsDirectConverter_1_t9ADDD5AED0C9FF81B738068C90D344C66801CB57* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_2 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppSharedGenericObject*, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1))), L_2);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_4 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_5 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_6 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_6, L_5, NULL);
		*(((RuntimeObject**)L_4)) = ((RuntimeObject*)L_6);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_4), (void*)((RuntimeObject*)L_6));
		return L_3;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_mBBA51679676A37182790296F70D70E3DE49AA2E5_gshared (fsDirectConverter_1_t9ADDD5AED0C9FF81B738068C90D344C66801CB57* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppSharedGenericObject* V_1 = NULL;
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		V_1 = ((Il2CppSharedGenericObject*)Castclass((RuntimeObject*)L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_10 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_11 = ___0_data;
		NullCheck(L_11);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_12;
		L_12 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_11, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_13;
		L_13 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppSharedGenericObject** >::Invoke(11, __this, L_12, (&V_1));
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_14;
		L_14 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_10, L_13, NULL);
		V_0 = L_14;
		RuntimeObject** L_15 = ___1_instance;
		Il2CppSharedGenericObject* L_16 = V_1;
		*(L_15) = ((RuntimeObject*)L_16);
		Il2CppCodeGenWriteBarrier((void**)L_15, (void*)((RuntimeObject*)L_16));
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_17 = V_0;
		return L_17;
	}
}
// Method Definition Index: 70886
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 70881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* fsDirectConverter_1_get_ModelType_m7BFCBE6128959F6AAA08BB9FB82C5E3DA07FB3AD_fshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(Type_t_StaticInit);
	//<source_info:<no-source>:1>
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(il2cpp_codegen_method_rgctx(method), 0)) };
		CHECKED_LOCAL_INIT(Type_t_StaticInit,(Type_t_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		return L_1;
	}
}
// Method Definition Index: 70882
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TrySerialize_mAB417033757D14765392C802374EE82941F7E430_fshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, RuntimeObject* ___0_instance, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** ___1_serialized, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	//<source_info:<no-source>:1>
	Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* V_0 = NULL;
	{
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_0 = (Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*)il2cpp_codegen_object_new(Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04(L_0, Dictionary_2__ctor_m3DC0B06262330D5590CF0BE04759F02C53807E04_RuntimeMethod_var);
		V_0 = L_0;
		RuntimeObject* L_1 = ___0_instance;
		void* L_3 = UnBox_Any(L_1, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_2);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_4 = V_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5;
		L_5 = VirtualFuncInvoker2Invoker< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Il2CppFullySharedGenericAny, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* >::Invoke(10, __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1)) ? (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3)): *(void**)(((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_3))), L_4);
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23** L_6 = ___1_serialized;
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_7 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_8 = (fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23*)il2cpp_codegen_object_new(fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23_il2cpp_TypeInfo_var);
		fsData__ctor_mCF4D73BFD9271596000ACC3E17988E3492236781(L_8, L_7, NULL);
		*(((RuntimeObject**)L_6)) = ((RuntimeObject*)L_8);
		Il2CppCodeGenWriteBarrier((void**)((RuntimeObject**)L_6), (void*)((RuntimeObject*)L_8));
		return L_5;
	}
}
// Method Definition Index: 70883
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 fsDirectConverter_1_TryDeserialize_m68AEEE5C3FB70E702E364D7B0C537966E0B079CF_fshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* ___0_data, RuntimeObject** ___1_instance, Type_t* ___2_storageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1));
	CHECKED_LOCAL(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	const Il2CppFullySharedGenericAny L_18 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	//<source_info:<no-source>:1>
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	memset(V_1, 0, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
	fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_0 = ((fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticFields*)il2cpp_codegen_static_fields_for(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var))->___Success;
		V_0 = L_0;
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_1 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_2 = ___0_data;
		NullCheck((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_3;
		L_3 = fsBaseConverter_CheckType_m14C4D0CAF424DF9F14D6365B5E5681C43FA82F32((fsBaseConverter_tDF9366828A5B8ADB6D986EB35B320D4DDC81CB04*)__this, L_2, 1, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_4;
		L_4 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_1, L_3, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_5 = L_4;
		V_0 = L_5;
		V_2 = L_5;
		bool L_6;
		L_6 = fsResult_get_Failed_m1398C627A72E75F5C7F8DB1A7C14E5B3271FF1FB((&V_2), NULL);
		if (!L_6)
		{
			goto IL_0022;
		}
	}
	{
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_7 = V_0;
		return L_7;
	}

IL_0022:
	{
		RuntimeObject** L_8 = ___1_instance;
		RuntimeObject* L_9 = *(L_8);
		void* L_11 = UnBox_Any(L_9, il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_10);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_11)), SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_12 = V_0;
		fsData_t6E144EC58C6E449805AB7BF77BCDAB7230BBFA23* L_13 = ___0_data;
		NullCheck(L_13);
		Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3* L_14;
		L_14 = fsData_get_AsDictionary_m51779E71BBC994A7F5036BFB43F61B28C0817D86(L_13, NULL);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_15;
		L_15 = VirtualFuncInvoker2< fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974, Dictionary_2_t9D50BDE1AE9A04E8610682F97C4DB702D3A9B4D3*, Il2CppFullySharedGenericAny* >::Invoke(11, __this, L_14, (Il2CppFullySharedGenericAny*)V_1);
		CHECKED_LOCAL_INIT(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_StaticInit,(fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974_il2cpp_TypeInfo_var),il2cpp_codegen_runtime_class_init_inline);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_16;
		L_16 = fsResult_op_Addition_mA94A4AD68668E539DEFE1255DC72B9D11A6DE41C(L_12, L_15, NULL);
		V_0 = L_16;
		RuntimeObject** L_17 = ___1_instance;
		il2cpp_codegen_memcpy(L_18, V_1, SizeOf_TModel_tA846BAB14AD72C3F97B08FAFEF7B2629C8054C13);
		RuntimeObject* L_19 = Box(il2cpp_rgctx_data(il2cpp_codegen_method_rgctx(method), 1), L_18);
		*(L_17) = L_19;
		Il2CppCodeGenWriteBarrier((void**)L_17, (void*)L_19);
		fsResult_tEB0578624BDC55E2B1775451433E6E3CBDA8D974 L_20 = V_0;
		return L_20;
	}
}
// Method Definition Index: 70886
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsDirectConverter_1__ctor_mA219A5FF100DBCB35147606E9E4E9C565D2F8D50_fshared (fsDirectConverter_1_tCBA7B5D48312C1775A21082D3D453731C902A8BD* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		fsDirectConverter__ctor_mCE6F7898DA2A3FBE101F5939D06A809E3164ABE1((fsDirectConverter_t9EE506A371C95C62E21CA6586396D7B3BD55F668*)__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 71019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_m2E9021BB4CB6156A14918A5B865D21751CA6D00C_fshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return L_0;
	}
}
// Method Definition Index: 71020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m8F02E0608720E562CDB4C8906C1CD863FD8FE767_fshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	//<source_info:<no-source>:1>
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1));
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 71021
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1_get_Value_m2A0C3FDC3098EA4DC3BB5CF398E95EC2C991988A_fshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = ((  bool (*) (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2)))(__this, il2cpp_rgctx_method(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 2));
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		il2cpp_codegen_memcpy(L_2, il2cpp_codegen_get_field_data_pointer(__this, il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4)), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_memcpy(il2cppRetVal, L_2, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
// Method Definition Index: 71022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m343A7CF35E302DB9E5BCA27A0DAC03751B238516_fshared (fsOption_1_t5311B4288B7772566C60259BB204CF5737742E88* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	CHECKED_LOCAL(classRgctxInit);
	const uint32_t SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
	//<source_info:<no-source>:1>
	{
		il2cpp_codegen_write_field_data<bool, false>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),0), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 1), (bool)1);
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 3)) ? ___0_value : &___0_value), SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		il2cpp_codegen_write_field_data<true>(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 0),1), il2cpp_rgctx_offset(CHECKED_LOCAL_INIT_PARAM(classRgctxInit,(il2cpp_codegen_method_rgctx(method)),il2cpp_codegen_initialized_method_rgctx,(method)), 4), L_0, SizeOf_T_tC5D84CBABB6B1934F21007E0A382E362C744EBA6);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 71019
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_HasValue_mA83E56B4674C678E7C760EABB73397EF37356E6F (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->____hasValue;
		return L_0;
	}
}
// Method Definition Index: 71020
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0 = __this->____hasValue;
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// Method Definition Index: 71021
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 fsOption_1_get_Value_m06DFFCCEB8E41DDEAEC89C3133DC3E75E3EA2241 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		bool L_0;
		L_0 = fsOption_1_get_IsEmpty_m95C6343EC3B5E180C487DF2F28019391A5B6672E(__this, NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_1 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral0A7D3B18DF4F9238A50A156FF06A5A7E794C1C7F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0013:
	{
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_2 = __this->____value;
		return L_2;
	}
}
// Method Definition Index: 71022
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fsOption_1__ctor_m22E0CD4999637C5B1CCFAD980FD29F2FFE3963B6 (fsOption_1_t5307CE32C845EE97F1173CDBB2385C4B81D2A28A* __this, fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		__this->____hasValue = (bool)1;
		fsVersionedType_tE569BD045F7DEDEC2122CC6CC0023B62B95332E8 L_0 = ___0_value;
		__this->____value = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___Ancestors), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___VersionString), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->____value))->___ModelType), (void*)NULL);
		#endif
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 700
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
// Method Definition Index: 11423
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Enumerator_get_Current_m27A9B9D3732FA85AE5063328B42817D18F991988_gshared_inline (Enumerator_t038D231EFD33CA6827B72B0B493F822DC96F8AC6* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		int32_t L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m36B8F113FD824518C95D724A04CD9EBE4EA4B89F_gshared_inline (Func_2_t36FB4A17A64C7F0152DC723CD532EEBF06F0B8DE* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_mC7591D3253947956E5574DC42E8B84FBF93404C6_gshared_inline (Func_2_tA2E08E055923B2432EB3C6B75FC124C37EA2A94C* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_mBA35EFC7B56DE1159A217041A0E34B248ABD65AD_gshared_inline (Func_2_t0C7E2CF62FA14B7663F608082632FF7B5B1CE110* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_mAACBBFA8D66C59AEFE34A5D4C504C6AA2848706C_gshared_inline (Func_2_t1E34B110B5504B16CB85FA04BDBC45E0B27C7E9A* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Func_2_Invoke_mA5C5EED38EB8BDE6DFBD593DBED64D6EE7F637BD_gshared_inline (Func_2_tE293F059826A5118304E0F2CE22FF6CAFD0456A2* __this, int32_t ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef int32_t (*FunctionPointerType) (RuntimeObject*, int32_t, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 11423
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR JsonValue_t01DB320267C848E729A400EF2345979978F851D2 Enumerator_get_Current_m9F9305DFA7957A66E104431A3EB3D5C071B4587D_inline (Enumerator_t06B71EF17663E35C7B0EA1A12263D9A5C5E116EB* __this, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	{
		JsonValue_t01DB320267C848E729A400EF2345979978F851D2 L_0 = __this->____current;
		return L_0;
	}
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Func_2_Invoke_m60AC8696E0B36FEA3C3F1A9818798A3D18953D63_inline (Func_2_t93FE63D487003DC89C264F70099E05071B9C1169* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef bool (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A Func_2_Invoke_mE87CCCF30117045DFD52777A0F83BB1A126A9C0A_gshared_inline (Func_2_t106BB9F613FF0DF5E7A489799FC10F3116B28CD1* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef ValueTuple_2_tCDFD7D7B4290217F286D3AC91BDF7C2A74C8636A (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Guid_t Func_2_Invoke_m630044D76C3678FABF3039C408414DBF09F888DA_inline (Func_2_tF489B2B253E957377765FE439B765B21FD00697A* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Guid_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t Func_2_Invoke_m9DF107DE50A7DAE57EF88ADC7A12CB87601075FE_inline (Func_2_t58D8488807DF3B441E717BD91D3A984E14CA8DD0* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef intptr_t (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 Func_2_Invoke_m7C8D770BA29067A536942979753FAB53ED84A348_inline (Func_2_t6FD5B0E57F9B999DF2B1B1566A80ECD9AF78E595* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef InternedString_t8D62A48CB7D85AAE9CFCCCFB0A77AC2844905735 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Func_2_Invoke_m275B0F1435986A6E7C5B02F3E0A626D021CE2979_inline (Func_2_t7472EE4FFAEB0FD2F0AE88D020645FDE61A4A5DA* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef float (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Func_2_Invoke_m2DB2FE564D96E2AB370DD99BBE73E71E82813584_inline (Func_2_t84E3127297A1008F45810D7F972FD3F9A85E0BAD* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Func_2_Invoke_m7C5D52D1A7031FA965122214AA3EC86A04626CB1_inline (Func_2_t167AF3BDF70D4F0944B41D9999EFDFD9E985CCF8* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Func_2_Invoke_m3340B81F75358EF5AD42BFD3182D073B2DD085EF_inline (Func_2_tAD534B035C23D88CEFC697EE9240925A841F771E* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 896
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Il2CppSharedGenericObject* Func_2_Invoke_m6FC84CCA1E1537AEB97A5251183BC4A54093DFB7_gshared_inline (Func_2_t49F448C3C26EF4E9FB3C8739F33E4639531AA4C4* __this, JsonValue_t01DB320267C848E729A400EF2345979978F851D2 ___0_arg, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef Il2CppSharedGenericObject* (*FunctionPointerType) (RuntimeObject*, JsonValue_t01DB320267C848E729A400EF2345979978F851D2, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
// Method Definition Index: 99505
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ExtractKeyDelegate_Invoke_mDD94D96DE41A630659B7FEC06A9FD18109A0947D_gshared_inline (ExtractKeyDelegate_tE4D9B381B4B2C5660CDC051C9DC53E2389049194* __this, Il2CppSharedGenericObject* ___0_value, const RuntimeMethod* method) 
{
	//<source_info:<no-source>:1>
	typedef String_t* (*FunctionPointerType) (RuntimeObject*, Il2CppSharedGenericObject*, const RuntimeMethod*);
	return ((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_value, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
