/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface AWDCoreCDPStateMachineEnableCDP : PBCodable <NSCopying> {
    bool  _cloudDataProtectionEnabled;
    long long  _errorCode;
    NSString * _errorDomain;
    struct { 
        unsigned int errorCode : 1; 
        unsigned int timestamp : 1; 
        unsigned int cloudDataProtectionEnabled : 1; 
        unsigned int shouldCompleteSignIn : 1; 
    }  _has;
    bool  _shouldCompleteSignIn;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool cloudDataProtectionEnabled;
@property (nonatomic) long long errorCode;
@property (nonatomic, retain) NSString *errorDomain;
@property (nonatomic) bool hasCloudDataProtectionEnabled;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic, readonly) bool hasErrorDomain;
@property (nonatomic) bool hasShouldCompleteSignIn;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool shouldCompleteSignIn;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (bool)cloudDataProtectionEnabled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)errorCode;
- (id)errorDomain;
- (bool)hasCloudDataProtectionEnabled;
- (bool)hasErrorCode;
- (bool)hasErrorDomain;
- (bool)hasShouldCompleteSignIn;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCloudDataProtectionEnabled:(bool)arg1;
- (void)setErrorCode:(long long)arg1;
- (void)setErrorDomain:(id)arg1;
- (void)setHasCloudDataProtectionEnabled:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasShouldCompleteSignIn:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setShouldCompleteSignIn:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (bool)shouldCompleteSignIn;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
