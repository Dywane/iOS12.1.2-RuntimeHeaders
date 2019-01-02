/* Generated by EzioChiu
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATransition : CAAnimation

@property float endProgress;
@property (copy) NSDictionary *options;
@property float startProgress;
@property (copy) NSString *subtype;
@property unsigned int transitionFlags;
@property (copy) NSString *type;

- (struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)_copyRenderAnimationForLayer:(id)arg1;
- (unsigned int)_propertyFlagsForLayer:(id)arg1;
- (bool)_setCARenderAnimation:(struct Animation { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; float x3; struct Ref<CA::Render::Timing> { struct Timing {} *x_4_1_1; } x4; struct Ref<CA::Render::Vector> { struct Vector {} *x_5_1_1; } x5; struct __CFString {} *x6; unsigned long long x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; }*)arg1 layer:(id)arg2;
- (float)endProgress;
- (id)filter;
- (id)options;
- (void)setEndProgress:(float)arg1;
- (void)setFilter:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setStartProgress:(float)arg1;
- (void)setSubtype:(id)arg1;
- (void)setTransitionFlags:(unsigned int)arg1;
- (void)setType:(id)arg1;
- (float)startProgress;
- (id)subtype;
- (unsigned int)transitionFlags;
- (id)type;

@end
