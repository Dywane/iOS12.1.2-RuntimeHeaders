/* Generated by EzioChiu
   Image: /System/Library/Frameworks/ModelIO.framework/ModelIO
 */

@interface MDLUtility : NSObject

+ (void)convertToUSDZ:(id)arg1 writeToURL:(id)arg2;
+ (void)convertToUSDZWithURL:(id)arg1;
+ (void)enumeratePrimMaterials:(const struct map<std::__1::basic_string<char>, UsdPrim, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, UsdPrim> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, UsdPrim>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, UsdPrim>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, UsdPrim> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, UsdPrim>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, UsdPrim>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; }*)arg1 usingBlock:(id /* block */)arg2;
+ (id)getResolvedPathForInput:(struct UsdShadeInput { struct UsdAttribute { int x_1_1_1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_3_1; } x_3_2_1; } x_1_1_3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_3_1; } x_4_2_1; } x_1_1_4; } x1; })arg1;
+ (struct TfRefPtr<UsdStage> { struct TfRefBase {} *x1; })openStageWithURL:(id)arg1;
+ (void)parseUSDMaterial:(struct UsdShadeMaterial { int (**x1)(); struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_2_1; } x_2_1_1; } x2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_2_1; } x_3_1_1; } x3; })arg1 rootUSD:(id)arg2 resolvedAttributes:(id)arg3 resourcePaths:(id)arg4 dirIdx:(unsigned long long*)arg5;
+ (void)resolveInput:(const struct UsdShadeInput { struct UsdAttribute { int x_1_1_1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_3_1; } x_3_2_1; } x_1_1_3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_3_1; } x_4_2_1; } x_1_1_4; } x1; }*)arg1 withAssetPath:(id)arg2 rootUSD:(id)arg3 resourcePaths:(id)arg4 resolvedAttrs:(id)arg5 dirIdx:(unsigned long long*)arg6;
+ (void)resolveInputs:(const struct UsdShadeInput { struct UsdAttribute { int x_1_1_1; struct Usd_PrimDataHandle { struct intrusive_ptr<const Usd_PrimData> { struct Usd_PrimData {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct SdfPath { struct intrusive_ptr<const Sdf_PathNode> { struct Sdf_PathNode {} *x_1_3_1; } x_3_2_1; } x_1_1_3; struct TfToken { struct TfPointerAndBits<const TfToken::_Rep> { struct _Rep {} *x_1_3_1; } x_4_2_1; } x_1_1_4; } x1; }*)arg1 withHandler:(id /* block */)arg2;
+ (id)resolveMaterialWithRootPath:(id)arg1 assetStringPath:(id)arg2 dirHash:(unsigned long long*)arg3;
+ (void)writeFilesToArchive:(id)arg1 rootUSDPath:(id)arg2 resourcePaths:(id)arg3 entryNames:(id)arg4;

@end
