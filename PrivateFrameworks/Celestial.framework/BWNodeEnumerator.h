/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWNodeEnumerator : NSEnumerator {
    unsigned long long  _depth;
    BWGraph * _graph;
    NSMutableDictionary * _nodeVisitCountMap;
}

+ (void)initialize;

- (unsigned long long)_updateVisitedCount:(id)arg1;
- (id)_visitedCount:(id)arg1;
- (void)dealloc;
- (id)initWithGraph:(id)arg1;

@end
