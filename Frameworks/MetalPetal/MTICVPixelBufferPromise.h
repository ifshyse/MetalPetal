//
//  MTICVPixelBufferPromise.h
//  Pods
//
//  Created by YuAo on 21/07/2017.
//
//

#import <MTIImagePromise.h>
#import <MTICVPixelBufferRendering.h>

NS_ASSUME_NONNULL_BEGIN

__attribute__((objc_subclassing_restricted))
@interface MTICVPixelBufferPromise : NSObject <MTIImagePromise>

@property (nonatomic, readonly) MTICVPixelBufferRenderingAPI renderingAPI;

@property (nonatomic, readonly) BOOL sRGB;

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithCVPixelBuffer:(CVPixelBufferRef)pixelBuffer options:(MTICVPixelBufferRenderingOptions *)options alphaType:(MTIAlphaType)alphaType;

@end

__attribute__((objc_subclassing_restricted))
@interface MTICVPixelBufferDirectBridgePromise : NSObject <MTIImagePromise>

- (instancetype)init NS_UNAVAILABLE;

+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithCVPixelBuffer:(CVPixelBufferRef)pixelBuffer planeIndex:(NSUInteger)planeIndex textureDescriptor:(MTLTextureDescriptor *)textureDescriptor alphaType:(MTIAlphaType)alphaType NS_DESIGNATED_INITIALIZER;

@end

NS_ASSUME_NONNULL_END
