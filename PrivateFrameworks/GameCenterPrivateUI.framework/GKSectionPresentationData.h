/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterPrivateUI.framework/GameCenterPrivateUI
 */

@interface GKSectionPresentationData : NSObject {
    double  _footerMaxY;
    double  _footerMinY;
    double  _headerMaxY;
    double  _headerMinY;
    double  _itemsMaxY;
    double  _itemsMinY;
    double  _maxY;
    double  _minY;
    unsigned long long  _numFooters;
    unsigned long long  _numHeaders;
    unsigned long long  _numItems;
    unsigned long long  _numOverlays;
    unsigned long long  _overlayOffset;
    long long  _section;
    double  _showMoreMaxY;
}

@property (nonatomic) double footerMaxY;
@property (nonatomic) double footerMinY;
@property (nonatomic) double headerMaxY;
@property (nonatomic) double headerMinY;
@property (nonatomic) double itemsMaxY;
@property (nonatomic) double itemsMinY;
@property (nonatomic) double maxY;
@property (nonatomic) double minY;
@property (nonatomic) unsigned long long numFooters;
@property (nonatomic) unsigned long long numHeaders;
@property (nonatomic) unsigned long long numItems;
@property (nonatomic) unsigned long long numOverlays;
@property (nonatomic) unsigned long long overlayOffset;
@property (nonatomic) long long section;
@property (nonatomic) double showMoreMaxY;

- (id)description;
- (double)footerMaxY;
- (double)footerMinY;
- (double)headerMaxY;
- (double)headerMinY;
- (id)initWithSection:(long long)arg1 presentationData:(id)arg2;
- (double)itemsMaxY;
- (double)itemsMinY;
- (double)maxY;
- (double)minY;
- (unsigned long long)numFooters;
- (unsigned long long)numHeaders;
- (unsigned long long)numItems;
- (unsigned long long)numOverlays;
- (unsigned long long)overlayOffset;
- (long long)section;
- (void)setFooterMaxY:(double)arg1;
- (void)setFooterMinY:(double)arg1;
- (void)setHeaderMaxY:(double)arg1;
- (void)setHeaderMinY:(double)arg1;
- (void)setItemsMaxY:(double)arg1;
- (void)setItemsMinY:(double)arg1;
- (void)setMaxY:(double)arg1;
- (void)setMinY:(double)arg1;
- (void)setNumFooters:(unsigned long long)arg1;
- (void)setNumHeaders:(unsigned long long)arg1;
- (void)setNumItems:(unsigned long long)arg1;
- (void)setNumOverlays:(unsigned long long)arg1;
- (void)setOverlayOffset:(unsigned long long)arg1;
- (void)setSection:(long long)arg1;
- (void)setShowMoreMaxY:(double)arg1;
- (double)showMoreMaxY;
- (void)updateWithLayoutAttributes:(id)arg1 supplementaryLocation:(unsigned long long)arg2;

@end
