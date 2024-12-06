import cv2

img = cv2.imread('images/ab-f-img2.jpg')

if img is None:
    print("Error: Image not loaded. Check the file path.")
else:
    cv2.imshow("Sample", img)
    cv2.waitKey(0)
    cv2.destroyAllWindows()