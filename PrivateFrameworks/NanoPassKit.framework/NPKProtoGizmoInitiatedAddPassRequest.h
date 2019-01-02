/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoGizmoInitiatedAddPassRequest : PBRequest <NSCopying> {
    NSData * _passData;
}

@property (nonatomic, retain) NSData *passData;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passData;
- (bool)readFrom:(id)arg1;
- (void)setPassData:(id)arg1;
- (void)writeTo:(id)arg1;

@end
