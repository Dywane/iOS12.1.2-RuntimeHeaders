/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIMessageCardSectionView : SearchUICardSectionView

@property (retain) TLKMessageView *contentView;

+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (unsigned long long*)messageServiceTypeForSearchUIMessageServiceType:(int)arg1;
- (unsigned long long*)messageStatusForSearchUIMessageStatus:(int)arg1;
- (id)setupContentView;
- (void)updateWithRowModel:(id)arg1;

@end
