/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXBlueprintMarker : NSObject <SXBlueprintMarker> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _approximateLocation;
    <SXComponentAnchor> * _componentAnchor;
    <SXComponent> * _leadingComponent;
    NSArray * _path;
    <SXComponent> * _trailingComponent;
}

@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } approximateLocation;
@property (nonatomic, retain) <SXComponentAnchor> *componentAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponent> *leadingComponent;
@property (nonatomic, readonly) NSArray *path;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXComponent> *trailingComponent;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })approximateLocation;
- (id)componentAnchor;
- (id)description;
- (id)initWithLeadingComponent:(id)arg1 trailingComponent:(id)arg2 approximateLocation:(struct CGPoint { double x1; double x2; })arg3 path:(id)arg4;
- (id)leadingComponent;
- (id)path;
- (void)setComponentAnchor:(id)arg1;
- (id)trailingComponent;

@end
