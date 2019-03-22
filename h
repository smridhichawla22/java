package com.niit.mockito;

import static org.junit.Assert.*;

import org.junit.Test;
import org.junit.runner.RunWith;
import org.mockito.Mock;
import static org.mockito.Mockito.when;
import org.mockito.runners.MockitoJUnitRunner;
import org.junit.runner.RunWith;



@RunWith(MockitoJUnitRunner.class)
public class StudentTest {
	@Mock
	StudentDAO studentDAO;
	
	@Test
	public void testGetDetails001() throws Exception {
		//fail("Not yet implemented");
		String rollno ="111";
		Student student = new Student();
		student.setRollno("111");
		when(studentDAO.getStudentDetails(rollno)).thenReturn(student);
		StudentCheck studentCheck = new StudentCheck();
		studentCheck.setStudDAO(studentDAO);
		Student stud = studentCheck.getDetails(rollno);
		assertEquals("111",stud.getRollno());
	}

}
