/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPMescalSessionInfoResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int status : 1; 
    }  _has;
    NSData * _sessionInfo;
    int  _status;
}

@property (nonatomic, readonly) bool hasSessionInfo;
@property (nonatomic) bool hasStatus;
@property (nonatomic, retain) NSData *sessionInfo;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionInfo;
- (bool)hasStatus;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionInfo;
- (void)setHasStatus:(bool)arg1;
- (void)setSessionInfo:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (void)writeTo:(id)arg1;

@end
