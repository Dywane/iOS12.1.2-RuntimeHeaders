/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
 */

@interface SBFMagnifyMode : NSObject <BSDescriptionProviding, NSCopying> {
    NSString * _name;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    float  _zoomFactor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;
@property (nonatomic) float zoomFactor;

+ (id)currentMagnifyMode;
+ (id)magnifyModeWithSize:(struct CGSize { double x1; double x2; })arg1 name:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setZoomFactor:(float)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (float)zoomFactor;

@end
