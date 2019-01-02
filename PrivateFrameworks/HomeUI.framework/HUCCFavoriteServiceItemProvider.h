/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUCCFavoriteServiceItemProvider : HFItemProvider <HUCCFavoriteItemProvider> {
    HMHome * _home;
    unsigned long long  _maximumNumberOfItems;
    NSMutableSet * _serviceLikeItems;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic) unsigned long long maximumNumberOfItems;
@property (nonatomic, retain) NSMutableSet *serviceLikeItems;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)init;
- (id)initWithHome:(id)arg1;
- (id)invalidationReasons;
- (id)items;
- (unsigned long long)maximumNumberOfItems;
- (id)reloadItems;
- (id)serviceLikeItems;
- (void)setMaximumNumberOfItems:(unsigned long long)arg1;
- (void)setServiceLikeItems:(id)arg1;

@end
