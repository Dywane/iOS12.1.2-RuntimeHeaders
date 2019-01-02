/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKShapeToCHRecognitionResult : NSObject {
    AKAnnotation * _annotation;
    UIBezierPath * _doodlePath;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _doodlePathBoundsInInputView;
    bool  _doodlePathIsPrestroked;
    PKDrawing * _inkDrawing;
    CHRecognitionResult * _result;
    long long  _tag;
}

@property (retain) AKAnnotation *annotation;
@property (retain) UIBezierPath *doodlePath;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } doodlePathBoundsInInputView;
@property bool doodlePathIsPrestroked;
@property (retain) PKDrawing *inkDrawing;
@property (retain) CHRecognitionResult *result;
@property long long tag;

- (void).cxx_destruct;
- (id)annotation;
- (id)doodlePath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })doodlePathBoundsInInputView;
- (bool)doodlePathIsPrestroked;
- (id)initWith:(long long)arg1 result:(id)arg2;
- (id)inkDrawing;
- (id)result;
- (void)setAnnotation:(id)arg1;
- (void)setDoodlePath:(id)arg1;
- (void)setDoodlePathBoundsInInputView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDoodlePathIsPrestroked:(bool)arg1;
- (void)setInkDrawing:(id)arg1;
- (void)setResult:(id)arg1;
- (void)setTag:(long long)arg1;
- (long long)tag;

@end
