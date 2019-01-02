/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFZipLocalFileHeader : NSObject {
    unsigned int  _compressedSize;
    unsigned short  _compressionMethod;
    unsigned int  _crc32;
    NSData * _extraFieldData;
    unsigned short  _extraFieldLength;
    NSString * _filename;
    unsigned short  _filenameLength;
    unsigned short  _generalPurposeBit;
    unsigned short  _lastModDate;
    unsigned short  _lastModTime;
    unsigned int  _uncompressedSize;
    unsigned short  _versionNeededToExtract;
}

@property (nonatomic) unsigned int compressedSize;
@property (nonatomic) unsigned short compressionMethod;
@property (nonatomic) unsigned int crc32;
@property (nonatomic, retain) NSData *extraFieldData;
@property (nonatomic, readonly) unsigned short extraFieldLength;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic, readonly) unsigned short filenameLength;
@property (nonatomic) unsigned short generalPurposeBit;
@property (nonatomic) unsigned short lastModDate;
@property (nonatomic) unsigned short lastModTime;
@property (nonatomic, readonly) unsigned int totalHeaderLength;
@property (nonatomic) unsigned int uncompressedSize;
@property (nonatomic) unsigned short versionNeededToExtract;

- (void)appendToData:(id)arg1;
- (unsigned int)compressedSize;
- (unsigned short)compressionMethod;
- (unsigned int)crc32;
- (void)dealloc;
- (id)description;
- (id)extraFieldData;
- (unsigned short)extraFieldLength;
- (id)filename;
- (unsigned short)filenameLength;
- (unsigned short)generalPurposeBit;
- (id)init;
- (unsigned short)lastModDate;
- (unsigned short)lastModTime;
- (unsigned long long)loadFromBytes:(const char *)arg1 offset:(unsigned long long)arg2;
- (unsigned long long)loadFromData:(id)arg1 offset:(unsigned long long)arg2;
- (void)setCompressedSize:(unsigned int)arg1;
- (void)setCompressionMethod:(unsigned short)arg1;
- (void)setCrc32:(unsigned int)arg1;
- (void)setExtraFieldData:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setGeneralPurposeBit:(unsigned short)arg1;
- (void)setLastModDate:(unsigned short)arg1;
- (void)setLastModTime:(unsigned short)arg1;
- (void)setUncompressedSize:(unsigned int)arg1;
- (void)setVersionNeededToExtract:(unsigned short)arg1;
- (unsigned int)totalHeaderLength;
- (unsigned int)uncompressedSize;
- (unsigned short)versionNeededToExtract;

@end
