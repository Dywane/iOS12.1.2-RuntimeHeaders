/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPTPAssetBuilder : NSObject {
    <PLPTPTransferableAsset> * _asset;
    PLPTPAsset * _commonPtpAsset;
    <PLPTPConversionSupport> * _conversionSupport;
    NSMutableArray * _convertedAssets;
    PLMutablePTPAsset * _currentPtpAsset;
    PLPTPAsset * _diagnosticPtpAsset;
    <PLFileManager> * _fileManager;
    NSString * _filenameForPTP;
    PLPTPAsset * _fullSizeRenderImagePtpAsset;
    PLPTPAsset * _fullSizeRenderVideoPtpAsset;
    bool  _irisSidecarRequiresFormatConversion;
    PLPTPAsset * _originalAdjustmentPtpAsset;
    PLPTPAsset * _originalPtpAsset;
    NSArray * _sidecarPtpAssets;
}

+ (bool)_shouldIncludeDiagnosticFile;
+ (id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2;

- (void).cxx_destruct;
- (id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3;
- (void)_buildBurst;
- (void)_buildCommonAsset;
- (void)_buildDeletedFlag;
- (void)_buildDiagnosticAsset;
- (bool)_buildDirectoryPathAndFilename;
- (void)_buildExifAvailable;
- (void)_buildFileSize;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildFullSizeRenderVideoAsset;
- (void)_buildGPSInformation;
- (void)_buildGroupUUID;
- (void)_buildImageDimensions;
- (void)_buildModificationAndCreationDate;
- (void)_buildOrientation;
- (void)_buildOriginalAdjustmentAsset;
- (bool)_buildOriginalAsset;
- (void)_buildOriginatingAssetID;
- (void)_buildPhotoKey;
- (void)_buildRelatedUUID;
- (void)_buildSidecarAssets;
- (void)_buildSlowMo;
- (void)_buildThumbnailDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildTimelapse;
- (void)_durationOfTheAsset;
- (bool)_hasIrisSidecarFile;
- (bool)_suppressPtpInfo;
- (void)_updateAsset:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateOriginalAssetFormatConversionFromVideoComplement;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3;
- (id)pictureTransferProtocolAssets;
- (void)updateAssetForFormatConversion:(id)arg1 isVideo:(bool)arg2 isRender:(bool)arg3 forceLegacyConversion:(bool)arg4;

@end
