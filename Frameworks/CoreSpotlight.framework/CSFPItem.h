/* Generated by EzioChiu
   Image: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSFPItem : NSObject {
    FPItem * _internal;
}

@property (nonatomic, readonly) NSString *itemIdentifier;
@property (nonatomic, readonly) NSString *providerIdentifier;
@property (nonatomic, readonly) CSSearchableItem *searchableItem;

+ (void)initialize;
+ (id)itemWithFileURL:(id)arg1;

- (void).cxx_destruct;
- (id)initWithFPItem:(id)arg1;
- (id)itemIdentifier;
- (id)providerIdentifier;
- (id)searchableItem;

@end
