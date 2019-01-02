/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMosaicGalleryLayouter : NSObject {
    NSMutableArray * _clusters;
    SXMosaicGalleryColumnLayout * _columnLayout;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    <SXMosaicGalleryLayouterDataSource> * _dataSource;
    NSMutableArray * _frames;
    NSMutableArray * _items;
    NSMutableArray * _layouts;
    unsigned long long  _numberOfItems;
    bool  _reverseNextHorizontalLivingRoomLayout;
    NSArray * _supportedTileTypeClusters;
    NSMutableArray * _views;
    double  _width;
}

@property (nonatomic, readonly) NSMutableArray *clusters;
@property (nonatomic, readonly) SXMosaicGalleryColumnLayout *columnLayout;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) <SXMosaicGalleryLayouterDataSource> *dataSource;
@property (nonatomic, readonly) NSMutableArray *frames;
@property (nonatomic, readonly) NSMutableArray *items;
@property (nonatomic, readonly) NSMutableArray *layouts;
@property (nonatomic, readonly) unsigned long long numberOfItems;
@property (nonatomic) bool reverseNextHorizontalLivingRoomLayout;
@property (nonatomic, readonly) NSArray *supportedTileTypeClusters;
@property (nonatomic, readonly) NSMutableArray *views;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (void)calculateLayoutForWidth:(double)arg1;
- (id)clusterForItemsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)clusters;
- (id)columnLayout;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)dataSource;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForItemAtIndex:(unsigned long long)arg1;
- (id)frames;
- (id)initWithDataSource:(id)arg1;
- (id)itemAtIndex:(unsigned long long)arg1;
- (id)items;
- (id)itemsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)layoutForCluster:(id)arg1 previousLayouts:(id)arg2;
- (void)layoutGalleryOnView:(id)arg1;
- (id)layouts;
- (unsigned long long)numberOfItems;
- (void)reset;
- (void)resetLayout;
- (bool)reverseNextHorizontalLivingRoomLayout;
- (void)setDataSource:(id)arg1;
- (void)setReverseNextHorizontalLivingRoomLayout:(bool)arg1;
- (void)setWidth:(double)arg1;
- (id)supportedTileTypeClusters;
- (id)viewForItem:(id)arg1;
- (id)viewForItemAtIndex:(unsigned long long)arg1;
- (id)views;
- (double)width;

@end
