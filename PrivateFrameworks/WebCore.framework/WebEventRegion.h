/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */



@interface WebEventRegion : NSObject <NSCopying>
{
    struct CGPoint { 
        float x; 
        float y; 
    } p1;
    struct CGPoint { 
        float x; 
        float y; 
    } p2;
    struct CGPoint { 
        float x; 
        float y; 
    } p3;
    struct CGPoint { 
        float x; 
        float y; 
    } p4;
}


- (struct FloatQuad { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatPoint { float x_2_1_1; float x_2_1_2; } x2; struct FloatPoint { float x_3_1_1; float x_3_1_2; } x3; struct FloatPoint { float x_4_1_1; float x_4_1_2; } x4; })quad;
- (BOOL)hitTest:(struct CGPoint { float x1; float x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithPoints:(struct CGPoint { float x1; float x2; })arg1 :(struct CGPoint { float x1; float x2; })arg2 :(struct CGPoint { float x1; float x2; })arg3 :(struct CGPoint { float x1; float x2; })arg4;

@end