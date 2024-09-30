class BrazoRobotico{

	private:
	
		double x,y,z;
		
		bool sujecion;

	public:
		
		BrazoRobotico(double,double,double);
		
		double get_x();
		
		double get_y();
		
		double get_z();

		bool get_sujecion();



		void coger();

		void soltar();

		void mover(double,double,double);

};
