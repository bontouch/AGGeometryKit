//
// Author: Håvard Fossli <hfossli@agens.no>
//
// Copyright (c) 2013 Agens AS (http://agens.no/)
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <Foundation/Foundation.h>

// http://processingjs.nihongoresources.com/bezierinfo/

#ifdef __cplusplus
extern "C" {
#endif

CGPoint CGPointGetPointForAnchorPointInRect(CGPoint anchor, CGRect rect);
CGPoint CGPointGetAnchorPointForPointInRect(CGPoint point, CGRect rect);
CGPoint CGPointForCenterInRect(CGRect rect);
CGFloat CGPointDistanceBetweenPoints(CGPoint p1, CGPoint p2);
CGPoint CGPointNormalizedDistance(CGPoint p1, CGPoint p2);
double CGSizeGetAspectRatio(CGSize size);
BOOL CGSizeAspectIsWiderThanCGSize(CGSize size1, CGSize size2);
CGSize CGSizeAdjustOuterSizeToFitInnerSize(CGSize outer, CGSize inner);
BOOL CGRectGotAnyNanValues(CGRect rect);
BOOL CGSizeGotAnyNanValues(CGSize size);
BOOL CGPointGotAnyNanValues(CGPoint origin);
CGPoint CGPointAddSize(CGPoint p, CGSize s);
CGRect CGRectMakeWithSize(CGSize size);
CGPoint CGRectGetMidPoint(CGRect rect);
CGSize CGSizeGetHalf(CGSize size);
CGSize CGSizeSwitchAxis(CGSize size);
CGRect CGRectWithSize(CGRect rect, CGSize newSize);
CGRect CGRectWithWidth(CGRect rect, CGFloat newWidth);
CGRect CGRectWithHeight(CGRect rect, CGFloat newHeight);
CGRect CGRectWithOrigin(CGRect rect, CGPoint origin);
CGRect CGRectWithOriginMinX(CGRect rect, CGFloat value);
CGRect CGRectWithOriginMinY(CGRect rect, CGFloat value);
CGRect CGRectWithOriginMaxY(CGRect rect, CGFloat value);
CGRect CGRectWithOriginMaxX(CGRect rect, CGFloat value);
CGRect CGRectWithOriginMidX(CGRect rect, CGFloat value);
CGRect CGRectWithOriginMidY(CGRect rect, CGFloat value);
CGRect CGRectApply(CGRect rect, CGRect (^block)(CGRect rect));
CGSize CGSizeApply(CGSize size, CGSize (^block)(CGSize size));
CGPoint CGPointApply(CGPoint point, CGPoint (^block)(CGPoint point));
CGRect CGRectSmallestWithCGPoints(CGPoint pointsArray[], int numberOfPoints);
CGSize CGSizeInterpolate(CGSize size1, CGSize size2, double progress);
CGPoint CGPointInterpolate(CGPoint point1, CGPoint point2, double progress);
CGRect CGRectInterpolate(CGRect rect1, CGRect rect2, double progress);
CGPoint CGPointApplyCATransform3D(CGPoint point, CATransform3D transform, CGPoint anchorPoint, CATransform3D parentSublayerTransform);
CGPoint CGPointVectorNormalize(CGPoint v);
CGFloat CGPointVectorGetLength(CGPoint v);
CGFloat CGPointVectorDotProduct(CGPoint v1, CGPoint v2);
CGFloat CGPointVectorCrossProductZComponent(CGPoint v1, CGPoint v2);

#ifdef __cplusplus
}
#endif