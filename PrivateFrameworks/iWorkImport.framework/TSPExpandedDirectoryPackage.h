/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPExpandedDirectoryPackage : TSPDirectoryPackage

+ (bool)hasZipArchive;
+ (bool)isValidPackageAtURL:(id)arg1;

- (id)newRawReadChannelForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (id)packageEntryInfoForComponentLocator:(id)arg1 isStoredOutsideObjectArchive:(bool)arg2;
- (void)prepareForDocumentReplacementWithSuccess:(bool)arg1 forSafeSave:(bool)arg2 originalURL:(id)arg3;

@end
