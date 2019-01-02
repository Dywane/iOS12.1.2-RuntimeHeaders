/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVPlaybackLeaseResponse : SSVPlaybackResponse <NSCopying> {
    NSData * _certificateData;
    unsigned long long  _kdMovieIdentifier;
}

@property (nonatomic) unsigned long long KDMovieIdentifier;
@property (nonatomic, copy) NSData *certificateData;
@property (nonatomic, readonly) double leaseDuration;
@property (nonatomic, readonly, copy) NSData *leaseInfoData;
@property (getter=isOfflineSlotAvailable, nonatomic, readonly) bool offlineSlotAvailable;
@property (nonatomic, readonly, copy) NSData *subscriptionKeyBagData;

- (void).cxx_destruct;
- (unsigned long long)KDMovieIdentifier;
- (id)certificateData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)isOfflineSlotAvailable;
- (id)itemForItemIdentifier:(id)arg1;
- (double)leaseDuration;
- (id)leaseInfoData;
- (void)setCertificateData:(id)arg1;
- (void)setKDMovieIdentifier:(unsigned long long)arg1;
- (id)subscriptionKeyBagData;

@end