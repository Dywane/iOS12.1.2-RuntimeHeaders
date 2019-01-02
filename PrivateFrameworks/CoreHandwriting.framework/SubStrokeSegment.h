/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface SubStrokeSegment : NSObject {
    unsigned long long  _endPointIndex;
    unsigned long long  _endStrokeIndex;
    bool  _isFullStroke;
    NSMutableArray * _relatedSegmentIDs;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _segmentBounds;
    NSNumber * _segmentID;
    unsigned long long  _startPointIndex;
    unsigned long long  _startStrokeIndex;
}

@property (nonatomic) unsigned long long endPointIndex;
@property (nonatomic) unsigned long long endStrokeIndex;
@property (nonatomic) bool isFullStroke;
@property (nonatomic, retain) NSMutableArray *relatedSegmentIDs;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } segmentBounds;
@property (nonatomic, retain) NSNumber *segmentID;
@property (nonatomic) unsigned long long startPointIndex;
@property (nonatomic) unsigned long long startStrokeIndex;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxFromSegmentID:(unsigned long long)arg1 toSegmentID:(unsigned long long)arg2 withSegments:(id)arg3 withSourceDrawing:(id)arg4;
+ (void)computeRelatedSegments:(id)arg1 withDelayedSegments:(id)arg2;
+ (id)generateSubStrokeSegmentsFromDrawing:(id)arg1 withSegmentationPoints:(id)arg2 extractDelayedStrokeIDs:(struct set<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree<unsigned long, std::__1::less<unsigned long>, std::__1::allocator<unsigned long> > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<unsigned long, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, std::__1::less<unsigned long> > { unsigned long long x_3_2_1; } x_1_1_3; } x1; })arg3 extractedDelayedSegments:(id*)arg4;
+ (unsigned long long)indexForSegmentID:(id)arg1 fromSegments:(id)arg2;

- (void)dealloc;
- (unsigned long long)endPointIndex;
- (unsigned long long)endStrokeIndex;
- (id)initWithSegmentID:(id)arg1 startStrokeIndex:(unsigned long long)arg2 startPointIndex:(unsigned long long)arg3 endStrokeIndex:(unsigned long long)arg4 endPointIndex:(unsigned long long)arg5 segmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6 isFullStroke:(bool)arg7;
- (bool)isFullStroke;
- (id)relatedSegmentIDs;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })segmentBounds;
- (id)segmentID;
- (void)setEndPointIndex:(unsigned long long)arg1;
- (void)setEndStrokeIndex:(unsigned long long)arg1;
- (void)setIsFullStroke:(bool)arg1;
- (void)setRelatedSegmentIDs:(id)arg1;
- (void)setSegmentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setSegmentID:(id)arg1;
- (void)setStartPointIndex:(unsigned long long)arg1;
- (void)setStartStrokeIndex:(unsigned long long)arg1;
- (unsigned long long)startPointIndex;
- (unsigned long long)startStrokeIndex;

@end
