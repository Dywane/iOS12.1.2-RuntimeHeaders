/* Generated by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMShapeUtils : NSObject

+ (id)absoluteOrientedBoundsWithRelativeOrientedBounds:(id)arg1 parentOrientedBounds:(id)arg2 parentLogicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (double)fixedPointDegToRad:(int)arg1;
+ (float)fontSizeForText:(id)arg1 insideRectangle:(struct CGSize { double x1; double x2; })arg2;
+ (double)getFormulaResultFromCustomGeometry:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)inscribedBoundsWithBounds:(id)arg1 logicalBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)internalBoundsWithBounds:(id)arg1 scaleBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(bool)arg2 nodeSize:(struct CGSize { double x1; double x2; })arg3;
+ (bool)isShapeALine:(id)arg1;
+ (double)mapAdjustCoord:(struct OADAdjustCoord { bool x1; int x2; })arg1 geometry:(id)arg2;
+ (int)mapFormulaKeywordValue:(int)arg1 geometry:(id)arg2;
+ (double)mapFormulaOfType:(int)arg1 argValues:(double*)arg2 isEscher:(bool)arg3;
+ (double)milliMinutesToRad:(int)arg1;
+ (double)nativeAngleToRad:(int)arg1 isEscher:(bool)arg2;
+ (float)normalizedAngle:(float)arg1;
+ (int)radToFixedPointDeg:(double)arg1;
+ (int)radToMilliMinutes:(double)arg1;
+ (int)radToNativeAngle:(double)arg1 isEscher:(bool)arg2;
+ (id)relatvieBoundsWithAbsoluteInnerBounds:(id)arg1 parentBounds:(id)arg2;
+ (float)scaleFactorFromLength:(float)arg1 toLength:(float)arg2;
+ (void)setCoordSpaceForCustomeGeometry:(id)arg1 fromSize:(struct CGSize { double x1; double x2; })arg2;
+ (id)transformFromBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 toOrientedBounds:(id)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })transformRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scale:(float)arg2 offsetX:(float)arg3 offsetY:(float)arg4;
+ (id)transformedBoundsWithBounds:(id)arg1 transform:(id)arg2;

@end
