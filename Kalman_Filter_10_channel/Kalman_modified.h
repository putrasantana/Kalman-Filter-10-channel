#ifndef _Kalman_h
#define _Kalman_h

class Kalman1 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman1(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue1(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters1(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters1(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise1() {
      return this->q;
    }
    
    double getSensorNoise1() {
      return this->r;
    }
    
    double getEstimatedError1() {
      return this->p;
    }
};

#endif


#ifndef _Kalman2_h
#define _Kalman2_h

class Kalman2 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman2(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue2(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters2(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters2(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise2() {
      return this->q;
    }
    
    double getSensorNoise2() {
      return this->r;
    }
    
    double getEstimatedError2() {
      return this->p;
    }
};

#endif


#ifndef _Kalman3_h
#define _Kalman3_h

class Kalman3 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman3(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue3(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters3(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters3(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise3() {
      return this->q;
    }
    
    double getSensorNoise3() {
      return this->r;
    }
    
    double getEstimatedError3() {
      return this->p;
    }
};

#endif



#ifndef _Kalman4_h
#define _Kalman4_h

class Kalman4 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman4(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue4(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters4(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters4(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise4() {
      return this->q;
    }
    
    double getSensorNoise4() {
      return this->r;
    }
    
    double getEstimatedError4() {
      return this->p;
    }
};

#endif

#ifndef _Kalman5_h
#define _Kalman5_h

class Kalman5 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman5(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue5(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters5(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters5(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise5() {
      return this->q;
    }
    
    double getSensorNoise5() {
      return this->r;
    }
    
    double getEstimatedError5() {
      return this->p;
    }
};

#endif



#ifndef _Kalman6_h
#define _Kalman6_h

class Kalman6 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman6(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue6(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters6(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters6(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise6() {
      return this->q;
    }
    
    double getSensorNoise6() {
      return this->r;
    }
    
    double getEstimatedError6() {
      return this->p;
    }
};

#endif



#ifndef _Kalman7_h
#define _Kalman7_h

class Kalman7 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman7(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue7(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters7(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters7(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise7() {
      return this->q;
    }
    
    double getSensorNoise7() {
      return this->r;
    }
    
    double getEstimatedError7() {
      return this->p;
    }
};

#endif



#ifndef _Kalman8_h
#define _Kalman8_h

class Kalman8 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman8(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue8(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters8(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters8(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise8() {
      return this->q;
    }
    
    double getSensorNoise8() {
      return this->r;
    }
    
    double getEstimatedError8() {
      return this->p;
    }
};

#endif



#ifndef _Kalman9_h
#define _Kalman9_h

class Kalman9 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman9(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue9(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters9(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters9(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise9() {
      return this->q;
    }
    
    double getSensorNoise9() {
      return this->r;
    }
    
    double getEstimatedError9() {
      return this->p;
    }
};

#endif



#ifndef _Kalman10_h
#define _Kalman10_h

class Kalman10 {
  private:
    /* Kalman filter variables */
    double q; //process noise covariance
    double r; //measurement noise covariance
    double x; //value
    double p; //estimation error covariance
    double k; //kalman gain
    
  public:
    Kalman10(double process_noise, double sensor_noise, double estimated_error, double intial_value) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
        this->x = intial_value; //x will hold the iterated filtered value
    }
    
    double getFilteredValue10(double measurement) {
      this->p = this->p + this->q;
      this->k = this->p / (this->p + this->r);
      this->x = this->x + this->k * (measurement - this->x);
      this->p = (1 - this->k) * this->p;   
      return this->x;
    }
    
    void setParameters10(double process_noise, double sensor_noise, double estimated_error) {
        this->q = process_noise;
        this->r = sensor_noise;
        this->p = estimated_error;
    }

    void setParameters10(double process_noise, double sensor_noise) {
        this->q = process_noise;
        this->r = sensor_noise;
    }
    
    double getProcessNoise10() {
      return this->q;
    }
    
    double getSensorNoise10() {
      return this->r;
    }
    
    double getEstimatedError10() {
      return this->p;
    }
};

#endif
