/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UICollectionViewPlaceholder : NSObject {
    NSString * _cellReuseIdentifier;
    id /* block */  _cellUpdateHandler;
    NSIndexPath * _insertionIndexPath;
}

@property (nonatomic, copy) NSString *cellReuseIdentifier;
@property (nonatomic, copy) id /* block */ cellUpdateHandler;
@property (nonatomic, retain) NSIndexPath *insertionIndexPath;

- (void).cxx_destruct;
- (id)cellReuseIdentifier;
- (id /* block */)cellUpdateHandler;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithInsertionIndexPath:(id)arg1 reuseIdentifier:(id)arg2;
- (id)insertionIndexPath;
- (void)setCellReuseIdentifier:(id)arg1;
- (void)setCellUpdateHandler:(id /* block */)arg1;
- (void)setInsertionIndexPath:(id)arg1;

@end
