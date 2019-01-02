/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPGetLikesRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int limit : 1; 
    }  _has;
    CKDPLikedId * _identifier;
    unsigned int  _limit;
}

@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic) bool hasLimit;
@property (nonatomic, retain) CKDPLikedId *identifier;
@property (nonatomic) unsigned int limit;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifier;
- (bool)hasLimit;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (unsigned int)limit;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasLimit:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLimit:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
