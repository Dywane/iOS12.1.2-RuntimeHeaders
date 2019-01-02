/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

@interface PHAPhotoVisionPhotoKitBridge : NSObject

+ (void)assignPropertiesOfPVFace:(id)arg1 toPHFaceChangeRequest:(id)arg2;
+ (id)newAllFacesFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllPersonsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAllPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newAssetFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFaceCropsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFaceGroupsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFacesDeterministicOrderFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newFacesRequiringFaceCropGenerationFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newObjectFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newVerifiedPersonsFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newVerifiedPersonsWithAtLeastOneFaceFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)newVisibleFacesFetchOptionsWithPhotoLibrary:(id)arg1;
+ (id)phFaceCropFromPVFaceCrop:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFaceCropsFromPVFaceCrops:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFaceFromPVFace:(id)arg1 withFetchOptions:(id)arg2;
+ (id)phFaceprintFromPVFaceprint:(id)arg1;
+ (id)phFacesFromPVFaces:(id)arg1 withFetchOptions:(id)arg2;
+ (id)pvFaceCropFromPHFaceCrop:(id)arg1;
+ (id)pvFaceFromPHFace:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFaceGroupFromPHFaceGroup:(id)arg1;
+ (id)pvFaceGroupsArrayFromPHFaceGroups:(id)arg1;
+ (id)pvFaceGroupsArrayFromPHFetchResult:(id)arg1;
+ (id)pvFaceGroupsSetFromPHFaceGroups:(id)arg1;
+ (id)pvFaceGroupsSetFromPHFetchResult:(id)arg1;
+ (id)pvFaceprintFromPHFaceprint:(id)arg1;
+ (id)pvFacesArrayFromPHFaces:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFacesArrayFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFacesSetFromPHFaces:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvFacesSetFromPHFetchResult:(id)arg1 copyPropertiesOption:(long long)arg2;
+ (id)pvPersonFromPHPerson:(id)arg1;
+ (id)pvPersonsArrayFromPHFetchResult:(id)arg1;
+ (id)pvPersonsArrayFromPHPersons:(id)arg1;
+ (id)pvPersonsSetFromPHFetchResult:(id)arg1;
+ (id)pvPersonsSetFromPHPersons:(id)arg1;

@end
