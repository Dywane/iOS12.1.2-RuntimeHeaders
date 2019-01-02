/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
 */

@interface NNMKProtoFetchBatchRequest : PBRequest <NSCopying> {
    NSMutableArray * _fetchRequests;
    unsigned int  _fullSyncVersion;
    struct { 
        unsigned int fullSyncVersion : 1; 
        unsigned int wantsBatchedResponse : 1; 
    }  _has;
    bool  _wantsBatchedResponse;
}

@property (nonatomic, retain) NSMutableArray *fetchRequests;
@property (nonatomic) unsigned int fullSyncVersion;
@property (nonatomic) bool hasFullSyncVersion;
@property (nonatomic) bool hasWantsBatchedResponse;
@property (nonatomic) bool wantsBatchedResponse;

+ (Class)fetchRequestType;

- (void).cxx_destruct;
- (void)addFetchRequest:(id)arg1;
- (void)clearFetchRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fetchRequestAtIndex:(unsigned long long)arg1;
- (id)fetchRequests;
- (unsigned long long)fetchRequestsCount;
- (unsigned int)fullSyncVersion;
- (bool)hasFullSyncVersion;
- (bool)hasWantsBatchedResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFetchRequests:(id)arg1;
- (void)setFullSyncVersion:(unsigned int)arg1;
- (void)setHasFullSyncVersion:(bool)arg1;
- (void)setHasWantsBatchedResponse:(bool)arg1;
- (void)setWantsBatchedResponse:(bool)arg1;
- (bool)wantsBatchedResponse;
- (void)writeTo:(id)arg1;

@end
