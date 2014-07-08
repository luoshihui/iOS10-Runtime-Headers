/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSArray;

@interface FigMetadataObjectCaptureConnectionConfiguration : FigCaptureConnectionConfiguration  {
    NSArray *_metadataIdentifiers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _metadataRectOfInterest;
}

@property(copy) NSArray * metadataIdentifiers;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } metadataRectOfInterest;


- (void)setMetadataRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })metadataRectOfInterest;
- (void)setMetadataIdentifiers:(id)arg1;
- (id)metadataIdentifiers;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end