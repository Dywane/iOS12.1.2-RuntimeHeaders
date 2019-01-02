/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _MapUpdate : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _deleteRange;
    long long  _index;
    NSIndexPath * _indexPath;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _insertRange;
    bool  _isDelete;
    bool  _isInsert;
    bool  _isMove;
    bool  _isSectionUpdate;
    NSIndexPath * _moveFromIndexPath;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _moveFromRange;
    long long  _moveFromSection;
    NSIndexPath * _moveToIndexPath;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _moveToRange;
    long long  _moveToSection;
    long long  _section;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } deleteRange;
@property (nonatomic) long long index;
@property (nonatomic, retain) NSIndexPath *indexPath;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } insertRange;
@property (nonatomic) bool isDelete;
@property (nonatomic) bool isInsert;
@property (nonatomic) bool isMove;
@property (nonatomic) bool isSectionUpdate;
@property (nonatomic, retain) NSIndexPath *moveFromIndexPath;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } moveFromRange;
@property (nonatomic) long long moveFromSection;
@property (nonatomic, retain) NSIndexPath *moveToIndexPath;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } moveToRange;
@property (nonatomic) long long moveToSection;
@property (nonatomic) long long section;

+ (id)itemDeleteItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemDeleteSection:(long long)arg1 deleteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)itemInsertItemAtIndexPath:(id)arg1 index:(long long)arg2;
+ (id)itemInsertSection:(long long)arg1 insertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
+ (id)itemMoveFromIndexIndexPath:(id)arg1 toIndexPath:(id)arg2 fromIndex:(long long)arg3 toIndex:(long long)arg4;
+ (id)itemMoveSection:(long long)arg1 toSection:(long long)arg2 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })deleteRange;
- (id)description;
- (long long)index;
- (id)indexPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })insertRange;
- (bool)isDelete;
- (bool)isInsert;
- (bool)isMove;
- (bool)isSectionUpdate;
- (id)moveFromIndexPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })moveFromRange;
- (long long)moveFromSection;
- (id)moveToIndexPath;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })moveToRange;
- (long long)moveToSection;
- (id)reverseUpdateItem;
- (long long)section;
- (void)setDeleteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIndex:(long long)arg1;
- (void)setIndexPath:(id)arg1;
- (void)setInsertRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setIsDelete:(bool)arg1;
- (void)setIsInsert:(bool)arg1;
- (void)setIsMove:(bool)arg1;
- (void)setIsSectionUpdate:(bool)arg1;
- (void)setMoveFromIndexPath:(id)arg1;
- (void)setMoveFromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMoveFromSection:(long long)arg1;
- (void)setMoveToIndexPath:(id)arg1;
- (void)setMoveToRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setMoveToSection:(long long)arg1;
- (void)setSection:(long long)arg1;

@end
